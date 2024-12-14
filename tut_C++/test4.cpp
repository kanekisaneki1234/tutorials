#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
#include <limits>
#include <stdexcept>

int getCount (const std::vector<int>& flaskSizes, int waterAvailable, int tankVolume)
{
    const int INF = std:: numeric_limits<int>::max();
    std::vector<int> dp(tankVolume+1 , INF);
    
    dp [0] = 0;

    for(int i = 1; i <= tankVolume; ++i) { 
        for(const int& flask : flaskSizes) {
            if(i >= flask && dp[i - flask] != INF) {
                dp[i] = std::min(dp[i], dp[i - flask] + 1);
            }
        }
    }

    return dp[tankVolume] == INF ? -1 : dp[ tankVolume];
}

int main()
{
    std::vector<int> input = {2, 3, 7, 1, 5, 4};
    std::cout << getCount(input, 100, 34) << std::endl;
}