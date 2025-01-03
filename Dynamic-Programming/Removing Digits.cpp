//prob-link: https://vjudge.net/problem/CSES-1093

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;
int digits[7];
int dp[1000001];
int subNumber(int x)
{
    if(x==0) return 0;
    if(x < 0) return 1e9;
    
    if(~dp[x]) return dp[x];
    
    int i=0;
    int temp=x;
    
    while(temp!=0)
    {
        digits[i]=temp%10;
        i++;
        temp/=10;
    }
    int sum=1e9;
    for(int j=0;j<i;j++)
    {
        if(digits[j]!=0)
            sum=min(sum, 1 + subNumber(x-digits[j]));
    }
    return dp[x] = sum;
}
int main() {
    cin.tie(nullptr);
    cin>>n;
    memset(dp, -1, sizeof(dp));
    
    
    cout<<(subNumber(n) == 1e9? -1:subNumber(n))<<endl;
    return 0;
}
