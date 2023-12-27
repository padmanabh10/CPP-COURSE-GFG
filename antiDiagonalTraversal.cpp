//
// Created by ppkkv on 27-12-2023.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> antiDiagonalPattern(vector<vector<int>> m)
    {
        int n = m.size();
        unordered_map<int, vector<int>> p;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                p[i+j].push_back(m[i][j]);
            }
        }

        vector<int> ans;

        for(int i=0; i<2*n-1; i++){
            for(auto e:p[i]) ans.push_back(e);
        }

        return ans;
    }
};
int main() {

    int n;
    cin >> n;
    vector<vector<int>> matrix;
    matrix.resize(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution ob;
    vector<int> ans = ob.antiDiagonalPattern(matrix);
    for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
    cout << endl;

    return 0;
}