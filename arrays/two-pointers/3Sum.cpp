//problem link: https://leetcode.com/problems/3sum/submissions/1486034933/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s=nums.size();
        vector<vector<int>> sol;
        if(s<3) return sol;
        int n=0,m=s-1;
        
        for(int i=0; i<s-2;i++)
        {
            int n=i+1,m=s-1;
            if(i>0 && nums[i] ==nums[i-1]) continue;
            while(m>n)
            {

                if( nums[m]+nums[n]+nums[i]==0)
                {
                    sol.push_back({nums[i], nums[m], nums[n]});
                    while (n < m && nums[n] == nums[n+1]) n++;
                    while (n < m && nums[m] == nums[m-1]) m--;
                    n++;
                    m--;
                }
                else if(nums[m]+nums[n]+nums[i] >0)
                {
                    m--;
                }
                else n++;
            }
        }
        return sol;
    }
};
