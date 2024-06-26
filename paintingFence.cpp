//
// Created by ppkkv on 13-12-2023.
//
// C++ program for Painting Fence Algorithm
// optimised version

#include <bits/stdc++.h>
using namespace std;

// Returns count of ways to color k posts
long countWays(int n, int k)
{
    long dp[n + 1];
    memset(dp, 0, sizeof(dp));
    long long mod = 1000000007;

    dp[1] = k;
    dp[2] = k * k;

    for (int i = 3; i <= n; i++) {
        dp[i] = ((k - 1) * (dp[i - 1] + dp[i - 2])) % mod;
    }

    return dp[n];
}

// Driver code
int main()
{
    int x,y;
    cin>>x>>y;
    cout << countWays(x, y) << endl;
    return 0;
}
