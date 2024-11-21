#include <iostream>
#include <vector>
// #include <algorithm>
#include <cmath> 

int getCount(const std::vector<int>& flaskSizes, int waterAvailable, int tankVolume)
{
    float num1;
    float max=0;
    for (int i =0; i< flaskSizes.size(); i++) {
        if (flaskSizes[i]>max) {
            max = flaskSizes[i];
        }
        std::cout << max;
    }
    if (waterAvailable<tankVolume) return -1;
    else {
        num1 = ceil(tankVolume/max);
    }
    return static_cast<int>(num1);
}

// #ifndef RunTests
int main()
{
    std::vector<int> input = {2, 3, 7, 1, 5, 4};
    std::cout << getCount(input, 100, 34) << std::endl;
}
// #endif