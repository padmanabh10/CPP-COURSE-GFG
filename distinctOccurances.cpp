//
// Created by ppkkv on 22-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subsequenceCount(string s, string t)
    {
        //Your code here
        const int MOD = 1000000007;
        int n = s.size(), m = t.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int j = 0; j <= n; j++) dp[0][j] = 1;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = dp[i][j - 1];
                if (s[j - 1] == t[i - 1]) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
                }
            }
        }
        return dp[m][n];
    }
};
int main()
{
        string s;
        string tt;
        cin>>s;
        cin>>tt;

        Solution ob;
        cout<<ob.subsequenceCount(s,tt)<<endl;



}