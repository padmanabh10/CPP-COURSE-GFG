//
// Created by ppkkv on 25-12-2023.
//
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        // code here
        int det = 0;
        vector<vector<int>>submatrix(n+1, vector<int>(n+1));
        if(n==1) return matrix[0][0];
        if (n == 2)
            return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
        else {
            for (int x = 0; x < n; x++) {
                int subi = 0;
                for (int i = 1; i < n; i++) {
                    int subj = 0;
                    for (int j = 0; j < n; j++) {
                        if (j == x)
                            continue;
                        submatrix[subi][subj] = matrix[i][j];
                        subj++;
                    }
                    subi++;
                }
                det = det + (pow(-1, x) * matrix[0][x] * determinantOfMatrix( submatrix, n - 1 ));
            }
        }
        return det;
    }
};
int main() {

    int n;
    cout<<"Enter dimension of Matrix:\n";
    cin>>n;
    vector<vector<int> > matrix(n);
    cout<<"Enter Matrix:\n";
    for(int i=0; i<n; i++)
    {
        matrix[i].assign(n, 0);
        for( int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    Solution ob;
    int result = ob.determinantOfMatrix(matrix, n);
    cout<<"Determinant of the Matrix:"<<result<<endl;

    return 0;
}