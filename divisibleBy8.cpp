//
// Created by ppkkv on 28-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int DivisibleByEight(string s){

        int n=s.length();
        int num=stoi(s.substr(max(n-3,0)));
        if( num%8==0)
            return 1;
        else
            return -1;
    }
};
int main()
{
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
}