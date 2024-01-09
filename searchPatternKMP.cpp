//
// Created by ppkkv on 09-01-2024.
//
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector <int> search(string pat, string txt)
    {
        vector<int> ans;
        int index = txt.find(pat, 0);

        while (index != string::npos)
        {
            ans.push_back(index + 1);
            index = txt.find(pat, index + 1);
        }
        return ans;
    }
};
int main()
{
    string S, pat;
    cin >> S >> pat;
    Solution ob;
    vector <int> res = ob.search(pat, S);
    if (res.size()==0)
        cout<<-1<<endl;
    else
    {
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}