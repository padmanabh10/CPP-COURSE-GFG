//
// Created by ppkkv on 24-02-2024.
//
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSum(int n)
    {
        vector<int> dp(n + 1, 0);
        dp[1] = 1;

        for(int i = 2; i < n + 1; i++){
            dp[i] = max(i, dp[i / 2] + dp[i / 3] + dp[i / 4]);
        }

        return dp[n];
    }
};
int main()
{

        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";

    return 0;
}