#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int avg(vector<long long> odd,vector<long long> even) {
    long long od=0;
    if(!odd.empty()) {
        while(odd.size()!=1) {
            long long av=(odd[0]+odd[1])/2;
            if(av%2==0)
                even.push_back(av);
            else
                odd.push_back(av);
            odd.erase(odd.begin(),odd.begin()+2);
        }
        od=odd[0];
    }
    long long ev=0;
    if(!even.empty()) {
        while(even.size()!=1) {
            long long av=(even[0]+even[1])/2;
            if(av%2==0)
                even.push_back(av);
            else
                odd.push_back(av);
            even.erase(even.begin(),even.begin()+2);
        }
        ev=even[0];
    }


    if (odd.empty())
        return ev;
    else if(even.empty())
        return od;
    else
        return (ev+od)/2;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        vector<long long> a(n);
        vector<long long> odd;
        vector<long long> even;

        for(int i=0; i<n; ++i) {
            cin>>a[i];
            if(a[i]%2!=0)
                odd.push_back(a[i]);
            else
                even.push_back(a[i]);
        }

        int x=avg(odd,even);
        cout<<x<<endl;
    }

    return 0;
}
