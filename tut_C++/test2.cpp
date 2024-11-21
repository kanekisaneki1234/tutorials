#include <algorithm>
#include <iostream>
#include <vector>
// #include <set>

double getSpottingMetric(std::vector<int> results)
{
    // std::vector<int> check;
    // int count=0;
    // std::set<int> minSet;
    double minAvg=0;
    int counter = 0;

    results.erase(std::remove(results.begin(), results.end(), 0), results.end());
    std::sort(results.begin(),results.end());
    while (counter<3){
        // check.push_back(results[counter]);
        minAvg += results[counter];
        counter++;
        // if (results[i]!=0) minSet.insert(results[i]);
    }
    minAvg/=3;

    return minAvg;

}

// #ifndef RunTests
int main()
{
    std::cout << getSpottingMetric({2, 1, 3, 0, 1, 5, 0, 0, 6, 7}) << std::endl;
}
// #endif