#include <iostream>
using namespace std;

class Solution{
public:
    int attack(int x,int y, int z[])
    {
        int first=0;
        int last=x-1;
        int count=0;
        while(last>=first && y>0)
        {
            if(z[first]!=0){
                y--;
                z[first]--;
            }
            else{
                first++;
                continue;
            }
            if(y==0)
                break;
            if(z[last]!=0){
                y--;
                z[last]--;
            }
            else
            {
                last--;
                continue;
            }

        }
        for(int i=0;i<x;i++)
        {
            if(z[i]==0)
                count++;
        }
        return count;
    }

};

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        Solution ob;
        int n,k;
        cin>>n>>k;
        int ships[n];
        for(int i=0;i<n;i++)
            cin>>ships[i];
        int result;
        result=ob.attack(n,k,ships);
        cout<<result<<"\n";
    }
    return 0;
}