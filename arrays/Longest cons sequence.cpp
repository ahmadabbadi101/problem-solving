//problem link: https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max = 1;
        int curr=1;
        int n= nums.size();
        if(n==0) return 0;
        for(int i=1;i<n;i++)
        {
            curr>max? max=curr: 0;
            if(nums[i]==nums[i-1]+1)
            {
                curr+=1;
            }
            
            else if(nums[i]!=nums[i-1])
            {
                curr=1;
            }
        }
        curr>max? max=curr: 0;
        return max;
    }
};
