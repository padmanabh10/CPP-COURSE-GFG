#include <iostream>
using namespace std;

class Solution{
public:
    void permutationGame(int n,int k, int Pb,int Ps,int p[],int a[])
    {
        int Bodya=0;
        int Sasha=0;

    }
};

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        Solution ob;
        int n,k,Pb,Ps;
        cin>>n>>k>>Pb>>Ps;
        int p[n],a[n];
        for(int i=0;i<n;i++)
            cin>>p[i];
        for(int i=0;i<n;i++)
            cin>>a[i];
        ob.permutationGame(n,k,Pb,Ps,p,a);
        cout<<endl;
    }
    return 0;
}