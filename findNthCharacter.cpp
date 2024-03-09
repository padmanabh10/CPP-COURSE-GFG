//
// Created by ppkkv on 09-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    char nthCharacter(string s, int r, int n) {
        //code
        int len=s.length();
        for (int i=0;i<r;i++)
        {
            string temp=s;
            for (int j=0;j<len;j++)
            {
                if (temp[j/2]=='0')
                    s[j]='0'+(j%2);
                else
                    s[j]='1'-(j%2);
            }
        }
        return s[n];

    }
};
int main() {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;

    return 0;
}