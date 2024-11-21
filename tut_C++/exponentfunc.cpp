// #include <cmath>
#include <iostream>

using namespace std;

float exp_func(int num, int pow) {
    float result = 1;
    if (pow >=0) {
        for (int i = 1; i<=pow; i++) {
            result *= num;
        }
    } else {
        for (int i = 1; i>=pow; i--) {
            result *= num;
        }
        result = 1/result; 
    }
        return result;
}

int main() {
    cout << exp_func(4, 2) << endl;
}