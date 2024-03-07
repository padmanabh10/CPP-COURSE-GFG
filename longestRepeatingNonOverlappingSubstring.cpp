//
// Created by ppkkv on 07-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestSubstring(string s, int n) {
        // code here
        string ans = "-1";
        for(int i = 0, j = 0; j<n; ++j){
            string t = s.substr(i,j-i+1);
            if(s.find(t,j+1)!=-1)   ans = t;
            else    ++i;
        }
        return ans;
    }
};
int main() {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;

    return 0;
}