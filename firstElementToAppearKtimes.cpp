//
// Created by ppkkv on 02-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int firstElementKTime(int n, int k, int a[])
    {
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mp[a[i]]==k) return a[i];
        }
        return -1;
    }
};
int main() {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        Solution ob;
        cout<<ob.firstElementKTime(n, k, a)<<endl;


    return 0;
}