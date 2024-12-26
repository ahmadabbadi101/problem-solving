//problem link : https://leetcode.com/problems/target-sum/submissions/1488516677/

class Solution {
public:
    int sols=0;
    void calculateNumber(vector<int>& nums, int num, int i, int target)
    {
        if(i==0) 
        {
            if (num == target) sols++;
            return;
        }

        calculateNumber(nums, num+nums[i-1], i-1, target);
        calculateNumber(nums, num-nums[i-1], i-1, target);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int s=nums.size();
        calculateNumber(nums,nums[s-1], s-1, target);
        calculateNumber(nums,-nums[s-1],s-1, target);
        return sols;
    }
};
