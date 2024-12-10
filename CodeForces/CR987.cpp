#include<iostream>
#include<vector>
using namespace std;

void solve(int n){
    if(n%2==0){
        int i=0;
        while(i!=n){
            if(i%2==0){
                cout<<(i+2)/2<<" ";
            }
            else{
                cout<<(i+1)/2<<" ";
            }
            i++;
        }
    }
    else{
        cout<<"-1";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        solve(n);
        cout<<endl;
    }
    return 0;
}
