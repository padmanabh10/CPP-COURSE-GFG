/*
Created by ppkkv on 15-12-2023.
Given a number n,
find count of all binary sequences of length 2n such that sum of first n bits is same as sum of last n bits.
The anwer can be very large. So, you have to return answer modulo 109+7.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int nCr(int x, int y)
    {
        if (y > x)
            return 0;
        if (y == 0 || y == x)
            return 1;
        return nCr(x - 1, y - 1) + nCr(x - 1, y);
    }
    int compute_value(int n)
    {
        int i,j;
        long val[n+1];
        long long mod=1e9+7;


        val[1]=2;
        val[2]=6;

        val[0]=0;
        for(j=0;j<n+1;j++)
        {
            val[j+1]=(val[j]+(nCr(n,j)*nCr(n,j)))%mod;
        }
        val[n] =val[n]+1;
        return val[n];

    }
};
int main()
{
    Solution s;
    int x;
    cout<<"n:";
    cin>>x;
    cout<<"Output:"<<s.compute_value(x)<<endl;
}