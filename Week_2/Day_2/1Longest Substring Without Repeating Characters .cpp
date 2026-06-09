#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, start = 0;
        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) != mp.end() && mp[s[i]] >= start) {
                start = mp[s[i]] + 1;
            }
            mp[s[i]] = i;

            res = max(res, i - start + 1);

            cout << "Char: " << s[i] << " res:" << res << endl;
        }
        return res;
    }
};