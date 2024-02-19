//
// Created by ppkkv on 19-02-2024.
//
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        map<char,int> m;
        for(auto x:s)
            m[x]++;
        priority_queue<int> pq;
        for(auto x:m)
            pq.push(x.second);
        for(int i=0;i<k;i++){
            int mxVal=pq.top();
            pq.pop();
            mxVal--;
            pq.push(mxVal);
        }
        int ans=0;
        while(!pq.empty()){
            int val=pq.top();
            pq.pop();
            ans+=(val*val);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
        string s;
        int k;
        cin>>s>>k;

        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    return 0;
}