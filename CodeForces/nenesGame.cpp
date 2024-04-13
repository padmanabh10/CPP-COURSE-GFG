#include <iostream>
using namespace std;

class Solution{
public:
    int nene(int c[],int d)
    {
        if(c[0]==1)
            return 0;
        else{
            if(c[0]>d)
                return d;
            else
                return c[0]-1;
        }

    }

};

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        Solution ob;
        int a,b;
        cin>>a>>b;
        int c[a],d[b];
        for(int i=0;i<a;i++)
            cin>>c[i];
        for(int i=0;i<b;i++)
            cin>>d[i];
        for(int i=0;i<b;i++)
            cout<<ob.nene(c,d[i])<<" ";
        cout<<"\n";
    }
    return 0;
}