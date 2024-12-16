//prob-link: https://cses.fi/problemset/task/1634

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n,x;
int dp[1000001];
int a[101];

int min_coins(int target)
{
    if(target<0) return 1e9;
    if(target == 0) return 0;
    int ans = 1e9;
    if(~dp[target]) return dp[target];
    for(int i=0;i<n;i++)
    {
        ans = min(ans, min_coins(target-a[i])+1);
    }
    return dp[target] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>x;
    memset(dp, -1, sizeof(dp));
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<(min_coins(x) == 1e9? -1 : min_coins(x))<<endl;
    return 0;
}
