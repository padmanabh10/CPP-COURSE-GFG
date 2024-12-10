#include <iostream>
#include <vector>
using namespace std;

void solution(const vector<vector<char>>& a) {
    for (int i = (a.size()-1); i >= 0; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] == '#') {
                cout << j+1 << " ";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> a(n, vector<char>(4));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> a[i][j];
            }
        }
        solution(a);
        cout << endl;
    }

    return 0;
}