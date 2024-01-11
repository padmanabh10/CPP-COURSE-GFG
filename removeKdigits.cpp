//
// Created by ppkkv on 11-01-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeKdigits(string S, int K) {
        string ans ;

        for (char c : S) {
            while (ans.length() && ans.back() > c && K) {
                ans.pop_back();
                K--;
            }

            if (ans.length() || c != '0') {
                ans.push_back(c);
            }
        }

        while (ans.length() && K--) {
            ans.pop_back();
        }
        return ans.empty() ? "0" : ans;
    }
};
int main() {
    string S;
    cin >> S;
    int K;
    cin >> K;
    Solution obj;
    cout << obj.removeKdigits(S, K) << endl;
    return 0;
}