#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int card(int y, int x[]) {
        if (y == 1)
            return 0;
        else {
            unordered_map<int, int> freq;
            int count = 0;
            for (int i = 0; i < y; i++) {
                count += freq[x[i]];
                freq[x[i]]++;
            }
            return count;
        }
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        Solution ob;
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        cout << ob.card(n, A) << "\n";
    }
    return 0;
}
