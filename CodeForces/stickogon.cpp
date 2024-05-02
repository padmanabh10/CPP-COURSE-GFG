#include <iostream>
using namespace std;

class Solution{
public:
    int stickogon(int n, int A[])
    {
        int temp[101];
        for(int i=0;i<101;i++)
            temp[i]=0;
        for(int i=0;i<n;i++)
        {
            int t=A[i];
            temp[t]=temp[t]+1;
        }
        int count=0;
        for(int i=0;i<101;i++)
        {
            if(temp[i]>2)
            {
                int c=temp[i]/3;
                count+=c;
            }
        }
        return count;
    }

};

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        Solution ob;
        int n;
        cin>>n;
        int A[n];
        for(int i=0; i<n;i++)
            cin>>A[i];
        cout<<ob.stickogon(n,A)<<endl;
    }
    return 0;
}
