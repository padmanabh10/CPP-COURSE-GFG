//
// Created by ppkkv on 26-03-2024.
//
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    bool isAdditiveSequence(string s) {
        // Your code here
        int n=s.length();
        int n1=0;
        for(int i=0;i<n/2;i++){
            n1=n1*10+(s[i]-'0');
            int n2=0;
            for(int j=i+1;j<n-1;j++){
                n2=n2*10 + (s[j]-'0');
                int pre=n1,curr=n2;
                int next=0;
                int k;
                for( k=j+1;k<n;k++){
                    next= next*10 + (s[k]-'0');
                    if(next==(pre+curr)){
                        pre=curr;
                        curr=next;
                        next=0;
                    }
                }
                if(k==n && next==0) return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {

    Solution sol;


        string s;
        cin >> s;

        bool result = sol.isAdditiveSequence(s);
        cout << result << endl;


    return 0;
}