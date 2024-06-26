//
// Created by ppkkv on 10-02-2024.
//
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:

    long long solve(int i,int j,int n,int k,vector<vector<int>> &arr,vector<vector<vector<int>>> &dp){
        if(i==n-1 && j==n-1){
            if(k==arr[i][j])return 1;
            return 0;
        }
        if(i>=n || j>=n)return 0;
        if(k<=arr[i][j])return 0;
        if(dp[i][j][k]!=-1){
            return dp[i][j][k];
        }
        return dp[i][j][k] = solve(i,j+1,n,k-arr[i][j],arr,dp)+solve(i+1,j,n,k-arr[i][j],arr,dp);
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr)
    {
        vector<vector<vector<int>>> dp(n,vector<vector<int>> (n,vector<int>(k+1,-1)));
        return solve(0,0,n,k,arr,dp);
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n;

        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;

}