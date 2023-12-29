//
// Created by ppkkv on 29-12-2023.
//
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:

    int kSubstrConcat (int n, string s, int k)
    {

        if (n % k > 0)
            return 0;

        unordered_map<string,int> mp;
        for (int i = 0; i < n / k; ++i)
            ++mp[s.substr(i * k, k)];

        int cnt = 0;
        for(auto i : mp)
            cnt += i.second > 1;

        return (mp.size() <= 2 && cnt <= 1);
    }
};
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int k; cin >> k;
    Solution  ob;
    cout << ob.kSubstrConcat (n, s, k) << endl;
}