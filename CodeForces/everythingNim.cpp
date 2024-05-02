#include <iostream>
#include <unordered_set>
using namespace std;

class Solution{
public:
    void everythingNim(int n,int A[])
    {

        unordered_set<int> distinctSet;
        for (int i=0;i< n;i++) {
            distinctSet.insert(A[i]);
        }
        int count= distinctSet.size();
        if(count %2 ==0)
            cout<<"Bob";
        else
            cout<<"Alice";

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
        for(int i=0;i<n;i++)
            cin>>A[i];
        ob.everythingNim(n,A);
        cout<<endl;
    }
    return 0;
}