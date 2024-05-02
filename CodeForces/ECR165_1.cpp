#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int twoFriends(int n,int p[])
    {
        if(n==2)
            return 2;
        else{
            int minCount=0;
            int temp[n+1];
            for(int j=n;j>0;j--)
            {
                temp[j]=p[j-1];
            }
            for(int i=1;i<=n;i++)
            {
               if(temp[(temp[i])]==i)
                   return 2;
            }
            return 3;
        }
    }

};

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        Solution ob;
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++)
            cin>>p[i];
        cout<<ob.twoFriends(n,p)<<endl;
    }
    return 0;
}