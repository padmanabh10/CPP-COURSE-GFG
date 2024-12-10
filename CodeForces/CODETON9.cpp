#include <iostream>
#include <set>
using namespace std;

void solution(long long x, long long m) {
    set<long long> d;
    if(x==1){
        cout<<m;
    }
    else {
        long long k;
        for(k=0;k*x<=m;k++){
            long long y=(k*x)^x;
            if(y>=1 && y<=m)
                d.insert(y);
        }
        for(long long y=1;y<=m ;y++){
            if(!(d.find(y)!=d.end())) {
                long long xor1=x^y;
                if(xor1%y==0 || xor1%x==0)
                    d.insert(y);
            }
        }
        cout<<d.size();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x, m;
        cin >> x >> m;
        solution(x, m);
        cout << endl;
    }
    return 0;
}
