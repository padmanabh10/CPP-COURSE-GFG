#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_possible(int n, int m, const vector<string>& grid) {
    int black_count = 0;
    for (const string& row : grid) {
        for (char square : row) {
            if (square == 'B') {
                black_count++;
            }
        }
    }
    int white_count = n * m - black_count;
    return (black_count % 2 == 0 && white_count % 2 == 0) || (black_count % 2 == 1 && white_count % 2 == 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        if (is_possible(n, m, grid)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
