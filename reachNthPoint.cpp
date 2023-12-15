//POTD-GFG-15-12-23
// Created by ppkkv on 15-12-2023.
/*There are N points on the road, you can step ahead by 1 or 2 . If you start from a point 0,
  and can only move from point i to point i+1 after taking a step of length one,
  find the number of ways you can reach at point N.*/
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int nthPoint(int n){
        // Code here
        long nt[n+1];
        long long mod=1e9+7;
        int i;

        nt[1]=1;
        nt[2]=2;

        for(i=3;i<=n;i++)
        {
            nt[i]=(nt[i-1]+nt[i-2])% mod;
        }
        return nt[n];
    }
};
int main()
{
    Solution s;
    int x;
    cout<<"Enter the nth point:";
    cin>>x;
    cout<<"No of ways you can reach:"<<s.nthPoint(x)<<endl;
}
