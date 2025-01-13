//problem link: https://leetcode.com/problems/3sum/description/
class Solution {
public:
    int trap(vector<int>& height) {
        int s= height.size();

        int l=0, r=s-1, sol=0;

        int leftMax=height[l], rightMax=height[r];
        while(l<r)
        {
            if(leftMax<rightMax)
            {
                l++;
                leftMax = max(leftMax, height[l]);
                sol+= leftMax-height[l];
            }
            else
            {
                r--;
                rightMax = max(rightMax, height[r]);
                sol+= rightMax-height[r];
            }
        }
        return sol;
    }
};
