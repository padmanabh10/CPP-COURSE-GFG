//
// Created by ppkkv on 03-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    static    bool cmp(string &s1,string &s2){
        return s1+s2>s2+s1;
    }
    string printLargest(int n, vector<string> &arr) {
        // code here
        sort(arr.begin(),arr.end(),cmp);
        string ans="";
        for(int i=0;i<arr.size();i++){
            ans+=arr[i];
        }
        return ans;
    }
};
int main() {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(n, arr);
        cout << ans << "\n";

    return 0;
}