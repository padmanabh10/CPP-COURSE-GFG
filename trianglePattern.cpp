//
// Created by ppkkv on 18-12-2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter a number:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (j<n-i)
                cout<<" ";
            else
                cout<<"*";

        }
        cout<<endl;

    }

}