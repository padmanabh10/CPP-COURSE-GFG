#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Number of cards
        cin >> N;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }

        // Find the index of the card with the maximum A value (Bob's choice)
        int max_A_idx = 0;
        for (int i = 1; i < N; ++i) {
            if (A[i] > A[max_A_idx]) {
                max_A_idx = i;
            }
        }

        // Max value Bob can have
        int max_bob = max(A[max_A_idx], B[max_A_idx]);
        bool canAliceWin = false;

        // Check for Alice's winning condition
        for (int i = 0; i < N; ++i) {
            if (i == max_A_idx) continue;  // Skip Bob's card
            if (max(A[i], B[i]) > max_bob) {
                canAliceWin = true;
                break;
            }
        }

        if (canAliceWin) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
