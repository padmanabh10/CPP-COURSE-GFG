//
// Created by ppkkv on 14-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestSubsquare(int n, vector<vector<char>> a) {
        vector<vector<int>>rows(n,vector<int>(n,0)),cols(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='X')
                {
                    cnt++;
                }
                else
                {
                    cnt=0;
                }
                rows[i][j]=cnt;
            }
        }

        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(a[j][i]=='X')
                {
                    cnt++;
                }
                else
                {
                    cnt=0;
                }
                cols[j][i]=cnt;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int curr = min(rows[i][j], cols[i][j]);
                while (curr > ans) {
                    int nrow = i - curr + 1; // check for curr dimension from left direction
                    int ncol = j - curr + 1;
                    if (rows[nrow][j] >= curr && cols[i][ncol] >= curr)
                    {
                        ans = curr;
                        break;
                    }
                    curr--;
                }
            }
        }
        return ans;
    }
};
int main() {
        int n;
        cin >> n;
        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        Solution ob;
        cout << ob.largestSubsquare(n, a) << "\n";
}