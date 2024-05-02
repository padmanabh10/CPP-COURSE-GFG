#include <iostream>
#include <cmath>
using namespace std;

class Solution{
public:
    void construction(int n, long long int k) {
        if(n == 1)
            cout << k;
        else {
            long long int ans[n];
            for(int i = 0; i < n; i++)
                ans[i] = 0;
            for(int i = 1; i < 30; i++) {
                if((1LL << i) >= k) {
                    ans[0] = (1LL << (i - 1)) - 1;
                    ans[1] = k - ans[0];
                    break;
                }
            }
            for(int i = 0; i < n; i++)
                cout << ans[i] << " ";
        }
    }
};

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        Solution ob;
        int n;
        long long int k;
        cin >> n >> k;
        ob.construction(n, k);
        cout << endl;
    }
    return 0;
}
