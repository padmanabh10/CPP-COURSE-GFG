//
// Created by ppkkv on 03-01-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestSubstring(string s) {
        vector<int>store(3) ;
        int low=0 , high=0 ;
        int n = s.size() ;
        int ans = n ;
        bool flag= false ;
        while(low<n and high<n)
        {
            store[s[high]-'0']++ ;
            while(store[0]!=0 and store[1]!=0 and store[2]!=0 and low<n)
            {
                flag = true ;
                ans = min(ans , high-low+1) ;
                store[s[low]-'0']-- ;
                low++ ;
            }
            high++ ;
        }
        if(flag)return ans ;
        return -1 ;
    }
};
int main() {
    string S;
    cout<<"Enter String:";
    cin >> S;
    Solution ob;
    cout <<"Smallest substring of string S:"<< ob.smallestSubstring(S);
    cout << endl;
}