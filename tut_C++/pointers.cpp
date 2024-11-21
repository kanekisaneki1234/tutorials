#include <iostream>

using namespace std;

int main() {
    int age = 18;
    int IQ = 150;
    cout << &age <<endl;
    int* pAge = &age;
    int *pIQ = &IQ;
    cout << *&age;
}