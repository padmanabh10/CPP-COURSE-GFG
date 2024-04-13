#include <iostream>
using namespace std;

class Solution{
public:
    void painting(int n,int m,int k)
    {
        if(n==1 || m==1) {
            cout << "NO\n";
            return;
        }
        else{
            if(k<=((n/m)*(m-1)+((n%m)-1)))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

    }


};

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        Solution ob;
        int n,m,k;
        cin>>n>>m>>k;
        ob.painting(n,m,k);
    }
    return 0;
}