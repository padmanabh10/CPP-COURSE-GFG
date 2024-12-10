#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solution(int n,int m,int L,vector<int> l,vector<int> r,vector<int> x,vector<int> v) {
    int mincount=0;
    int pos=1;
    int jumppower=1;
    int i=0,j=0;
    int nextjump=r[0]-l[0];
    while(pos<r[n-1]){
        if(jumppower<nextjump) {




        }
        else if(pos+jumppower>=l[i] && pos+jumppower<=r[i]){

        }
        else if(pos+jumppower>r[i]){
            mincount++;
            i++;
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n,m,L;
        cin>>n>>n>>L;
        vector<int> l(n),r(n);
        for(int i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
        }
        vector<int> x(m),v(m);
        for(int i=0;i<m;i++)
        {
            cin>>x[i]>>v[i];
            
        }

        solution(n,m,L,l,r,x,v);
        cout<<endl;
    }
    return 0;
}
