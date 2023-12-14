//
// Created by ppkkv on 14-12-2023.
//
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

long long countStrings(int n) {
        // code here
        long st[n+1];
        memset(st,0,sizeof(st));
        long long mod=1e9+7;


        st[1]=2;
        st[2]=3;

        int i;
        for(i=3;i<=n;i++)
        {
           st[i]=(st[i-1]+st[i-2])%mod;

        }
        return st[n];
    }

int main()
{
    int x;
    cin>>x;
    cout << countStrings(x) << endl;
    return 0;
}