#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> tracks(n);

    for (int i = 0; i < n; i++) {
        cin >> tracks[i].first >> tracks[i].second;
    }

    vector<int> strongly_recommended(n);

    for (int i = 0; i < n; i++) {
        vector<int> predictors;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (tracks[j].first <= tracks[i].first && tracks[j].second >= tracks[i].second) {
                predictors.push_back(j);
            }
        }

        if (predictors.empty()) {
            strongly_recommended[i] = 0;
            continue;
        }

        int left = 1, right = 1e9;
        for (int p : predictors) {
            left = max(left, tracks[p].first);
            right = min(right, tracks[p].second);
        }

        strongly_recommended[i] = right - left + 1 - tracks[i].second + tracks[i].first - 1;
    }

    for (int r : strongly_recommended) {
        cout << r << endl;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}