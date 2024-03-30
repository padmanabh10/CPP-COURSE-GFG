#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        if(y>x)
        {
            if(z>y)
                cout<<"STAIR";
            else if(z==y)
                cout<<"NONE";
            else
                cout<<"PEAK";
        }
        else
            cout<<"NONE";
        cout << endl;
    }
    return 0;
}
