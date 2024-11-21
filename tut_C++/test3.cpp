#include <iostream>
#include <vector>

bool Helper(std::vector<int> &check)
{
    for(int i=0; i < check.size(); i++)
    {
        if (check[i]==0) return false;
    }
    return true;
}

int usageCount(const std::vector<int> &bridge)
{
    std::vector<int> check = bridge;
    int count=0;
    // bool helperVar = Helper
    while (Helper(check)) {
        for (int i=0; i < bridge.size(); i++) {
            check[i]=check[i]-2;
            std::cout << check[i] << " ";
        }
        count++;
    }
    return count-1;
}

#ifndef RunTests
int main() {
    std::vector<int> bridge = {7, 6, 5, 8};
    std::cout << usageCount(bridge) << std::endl; // Should print 2
}
#endif

// int usageCount(const std::vector<int> &bridge)
// {
//     throw std::logic_error("Waiting to be implemented");
// }