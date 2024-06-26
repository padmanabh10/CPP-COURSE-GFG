//
// Created by ppkkv on 11-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:

    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
    {
        int i=0,j=n*n-1,ans=0;
        while(i<(n*n) && j>=0){
            int e=mat1[i/n][i%n]+mat2[j/n][j%n];
            if(e==x)
            {
                ans++;
                i++;
                j--;
            }
            else if(e>x)
                j--;
            else
                i++;
        }
        return ans;
    }
};
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> mat1[i][j];
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> mat2[i][j];
            }
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";



    return 0;
}