#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        int floor[n];
        int ceil[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            floor[i]=floor(a[i]/k);
        }

        long long sum = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            int floor_val = floor((double)a[i] / k);
            int ceil_val = ceil((double)a[i] / k);

            // The difference between ceil and floor is either 0 or 1.
            if (floor_val == ceil_val) {
                sum += floor_val;
            } else {
                // We can either choose floor or ceil, but we must balance out the sum to zero
                sum += floor_val;
            }
        }

        // Check if the sum is zero
        if (sum == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
