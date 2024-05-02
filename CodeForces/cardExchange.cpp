#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int cardExchange(int n,int k,int A[])
    {
        if(n<k)
            return n;
        else{
           int maxCount=0;
           for(int i=0;i<n;i++)
           {
               if(maxCount< count(A,A+n,A[i]))
                   maxCount=count(A,A+n,A[i]);
           }
           if(maxCount<k)
               return n;
           else
               return k-1;
        }

    }
};

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        Solution ob;
        int n,k;
        cin>>n>>k;
        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        cout<<ob.cardExchange(n,k,A)<<endl;
    }
    return 0;
}