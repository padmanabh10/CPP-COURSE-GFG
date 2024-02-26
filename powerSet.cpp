//
// Created by ppkkv on 26-02-2024.
//
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> out;
    string curr;

    void subSeq(int i, string &s) {
        if (i == s.size()) {
            if (curr.size())
                out.push_back(curr);
            return;
        }

        curr.push_back(s[i]);
        subSeq(i + 1, s);
        curr.pop_back();
        subSeq(i + 1, s);
    }

    vector<string> AllPossibleStrings(string s) {
        subSeq(0, s);
        sort(out.begin(), out.end());
        return out;
    }
};
int main(){
        string s;
        cin >> s;
        Solution ob;
        vector<string> res = ob.AllPossibleStrings(s);
        for(auto i : res)
            cout << i <<" ";
        cout << "\n";


    return 0;
}