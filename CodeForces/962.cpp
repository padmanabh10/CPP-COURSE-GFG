#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

const int MOD = 1e9 + 7;

int countBalancedSubstrings(const string& s) {
    unordered_map<int, int> balanceCount;
    int balance = 0, count = 0;

    // Initialize the map with balance 0 having count 1
    balanceCount[0] = 1;

    for (char c : s) {
        if (c == '0') balance -= 1;
        else balance += 1;

        if (balanceCount.find(balance) != balanceCount.end()) {
            count = (count + balanceCount[balance]) % MOD;
        }

        balanceCount[balance]++;
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << countBalancedSubstrings(s) << endl;
    }

    return 0;
}
