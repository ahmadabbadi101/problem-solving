//problem link : https://leetcode.com/problems/median-of-two-sorted-arrays/description/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float ans=-FLT_MAX;
        int A=nums1.size(), B=nums2.size();
        int total = (A+B);
        int half = total/2;
            if(A>B)
            {
                swap(nums1,nums2);
                swap(A,B);
            }
            int l=0, r=A-1;
            while(ans==-FLT_MAX)
            {
                int i=(l+r)/2;
                if(r<0) i=-1;
                int j=half-i-2;

                int aLeft = i>=0 ? nums1[i] : INT_MIN;
                int aRight = (i+1) < A ? nums1[i+1] : INT_MAX;
                int bLeft = j>=0 ? nums2[j] : INT_MIN;
                int bRight = (j+1) < B ? nums2[j+1] : INT_MAX;

                if(aLeft<=bRight && bLeft <= aRight)
                {
                    if(total%2) ans = min(bRight, aRight);
                    else ans = ( (float)min(aRight, bRight) + (float)max(aLeft, bLeft) ) / 2.0;
                }
                else if( aLeft>bRight ) r = i-1;
                else l=i+1;
            }
            return ans;
    }
};
