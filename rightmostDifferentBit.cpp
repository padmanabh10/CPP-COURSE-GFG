//
// Created by ppkkv on 18-12-2023.
//
/*Given two numbers M and N.
 * The task is to find the position of the rightmost different bit in the binary representation of numbers.
 * If both M and N are the same then return -1 in this case.*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int posOfRightMostDiffBit(int m, int n)
    {
        long long int x,y;
        x=m;
        y=n;
        int count=1;
        long long int z=x^y;
//        cout<<z<<endl;
        while(z%2==0 and z!=0)
        {
            z=z>>1;
            count++;
        }
        if(z==0)
        {
            count=-1;
        }
        return count;
    }
};
int main()
{
    Solution s;
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Position of rightmost different bit:"<<s.posOfRightMostDiffBit(x,y)<<endl;
}