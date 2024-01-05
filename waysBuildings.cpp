//
// Created by ppkkv on 05-01-2024.
//
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    const long long mod = 1000000007;

    int TotalWays(int N) {
        long long a = 1, b = 1, c = 0;
        for (int i = 1; i <= N; i++) {
            c = (a % mod + b % mod) % mod;
            a = b % mod;
            b = c % mod;
        }
        return static_cast<int>((c * c) % mod);
    }
};
int main(){
    int N;
    cout<<"Enter No Plots on each side:";
    cin >> N;
    Solution ob;
    int ans = ob.TotalWays(N);
    cout <<"Total no of possible ways of construction:" << ans <<"\n";
    return 0;
}