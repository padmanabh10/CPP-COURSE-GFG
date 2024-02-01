//
// Created by ppkkv on 02-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int atoi(string s) {
        //Your code here
        int n=s.size();
        int ans=0;
        if(s[0]=='-')
        {
            for(int i=1;i<n;i++)
            {
                if(s[i]>='0'&&s[i]<='9')
                {
                    ans=10*ans+s[i]-48;
                }
                else{
                    return -1;
                }
            }
            return -1*ans;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]>='0'&&s[i]<='9')
                {
                    ans=10*ans+s[i]-48;
                }
                else{
                    return -1;
                }
            }
            return ans;
        }
    }
};
int main()
{
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.atoi(s)<<endl;

}