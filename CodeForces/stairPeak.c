
#include<stdio.h>
using namespace std;
void stairPeak(int a,int b,int c)
{
    if(b>a)
    {
        if(c>b)
            cout<<"STAIR";
        else
            cout<<"PEAK";
    }
    else
        cout<<"NONE";
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        stairPeak(x,y,z);
        cout<<endl;
    }
    return 0;
}