//
// Created by ppkkv on 17-01-2024.
//

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void fun(vector<int>& arr, int i, int n, set<vector<int>>& st){
        if(i == n - 1){
            st.insert(arr);
            return;
        }
        for(int j = i; j < n; j++){
            swap(arr[i], arr[j]);
            fun(arr, i + 1, n, st);
            swap(arr[i], arr[j]);
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {

        vector<vector<int>>res;
        set<vector<int>>st;
        fun(arr, 0, n, st);
        for(auto it : st)
            res.push_back(it);

        return res;
    }
};
int main() {
    int n;

    cin>>n;
    vector<int> arr(n);

    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    Solution ob;
    vector<vector<int>> res = ob.uniquePerms(arr,n);
    for(int i=0; i<res.size(); i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
