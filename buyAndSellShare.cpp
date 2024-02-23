//
// Created by ppkkv on 23-02-2024.
//
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //User function Template for C++
    int dp[100001][2][2];
    int fun(int ind,int buy,int tot,vector<int> &price){
        if(ind>=price.size() || tot==0) return 0;

        if(dp[ind][buy][tot]!=-1) return dp[ind][buy][tot];
        int purch;
        if(buy==0){
            return dp[ind][buy][tot]=max(price[ind]+fun(ind+1,(1),tot-1,price),fun(ind+1,(0),tot,price));
        }
        if(buy==1){
            return dp[ind][buy][tot]=max(-price[ind]+fun(ind+1,(0),tot,price),fun(ind+1,(1),tot,price));
        }
    }
    int maxProfit(vector<int>&price){
        //Write your code here..
        memset(dp,-1,sizeof(dp));

        return fun(0,1,2,price);
    }
};
int main(){
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
}