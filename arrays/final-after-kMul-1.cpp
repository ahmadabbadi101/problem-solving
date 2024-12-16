//problem linkhttps://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int> sol;
        int n = nums.size();
        auto min=min_element(nums.begin(), nums.end());

        for(int i=0;i<k;i++)
        {
            *min *= multiplier;
            min=min_element(nums.begin(), nums.end());
        }
        return nums;
    }
};
