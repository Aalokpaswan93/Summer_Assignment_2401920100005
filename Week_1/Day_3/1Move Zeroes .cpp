#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0; // position for next non-zero element

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[pos], nums[i]);
                pos++;
            }
        }
    }
};