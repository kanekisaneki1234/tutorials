#include <cstddef>
#include <iostream>
#include <iterator>

using namespace std;

template <size_t rows, size_t columns>
// void printArray(int arr[rows][columns], int r, int c) {
void printArray(const int (&arr)[rows][columns]) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cout << arr[i][j] << " ";
        }
    }
}

int main() {
    int numGrid[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };
    cout << size(numGrid) << endl;
    cout << size(numGrid[0])<<endl;
    constexpr size_t rows = size(numGrid);
    constexpr size_t columns = size(numGrid[0]);

    printArray(numGrid);
}