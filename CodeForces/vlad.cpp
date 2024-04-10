#include<iostream>
#include <cmath>
using namespace std;

class Solution{
public:
    char vlad(char A[])
    {
        int a=0,b=0;
        for(int i=0;i<5;i++)
        {
            if(A[i]=='A')
                a++;
            else
                b++;
        }
        if(a>b)
            return 'A';
        else
            return 'B';
    }
};
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        char A[5];
        for(int i=0;i<5;i++)
            cin>>A[i];
        Solution ob;
        cout<<ob.vlad(A)<<"\n";
    }
}