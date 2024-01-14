//
// Created by ppkkv on 14-01-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> repeatedRows(vector<vector<int>> &mat, int R, int C)
    {
        map<vector<int>,int> mp;
        vector<int> temp;
        vector<int> ans;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                temp.push_back(mat[i][j]);
            }
            if(mp.find(temp)!=mp.end())
            {
                ans.push_back(i);
            }
            else
            {
                mp[temp]=1;

            }
            temp.clear();
        }
        return ans;
    }
};
int main() {
    int row, col;
    cin>> row>> col;
    vector<vector<int> > matrix(row);
    for(int i=0; i<row; i++)
    {
        matrix[i].assign(col, 0);
        for( int j=0; j<col; j++)
        {
            cin>>matrix[i][j];
        }
    }

    Solution ob;
    vector<int> ans = ob.repeatedRows(matrix, row, col);
    for (int i = 0; i < ans.size(); ++i)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}