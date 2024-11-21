#include <cstddef>
#include <iostream>
#include <string>
// #include <vector>
#include <set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    set<char> seen;
    int left = 0, right = 0;
    int longest = 0;

    while (right < s.size()) {
        if (seen.find(s[right]) == seen.end()) {
            seen.insert(s[right]);
            longest = std::max(longest, static_cast<int>(seen.size()));
            right++;
        }
        else {
            seen.erase(s[left]);
            left++;
        }
        for (auto it = seen.begin(); it != seen.end(); ++it) {
            cout << *it << ' ';
        }
        cout << endl;
    }
    return longest;
}


int main() {
    string s="pwwekk";
    cout << endl << lengthOfLongestSubstring(s) << endl;
}