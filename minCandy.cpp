//
// Created by ppkkv on 21-12-2023.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCandy(int n, vector<int> &a) {
        vector<int>dp(n,1);
        int sum=0;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]) dp[i]+=dp[i-1];
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]>a[i+1] and dp[i]<=dp[i+1]) dp[i]=dp[i+1]+1;
        }
        for(auto i:dp) sum+=i;
        return sum;
    }
};
int main() {
    int N;
    cout<<"Enter No of elements in Vector:\n";
    cin >> N;

    vector<int> ratings(N);
    cout<<"Enter Vector:\n";
    for (int i = 0; i < N; i++) {
        cin >> ratings[i];
    }
    Solution obj;
    cout <<"Minimum No of candies required:"<< obj.minCandy(N, ratings) << endl;
}

