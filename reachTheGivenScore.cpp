//
// Created by ppkkv on 25-02-2024.
//
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class Solution
{
public:
    long long int count(long long int n)
    {
        vector<long long>dp(n+1,0);
        dp[0] = 1;
        for(int i=3;i<n+1;i++) {
            dp[i] += dp[i-3];
        }
        for(int i=5;i<n+1;i++) {
            dp[i] += dp[i-5];
        }
        for(int i=10;i<n+1;i++) {
            dp[i] += dp[i-10];
        }
        return dp[n];
    }
};
int main()
{
        ll n;
        cin>>n;
        Solution obj;
        cout<<obj.count(n)<<endl;

    return 0;
}