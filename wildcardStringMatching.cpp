//
// Created by ppkkv on 28-12-2023.
//
/*Given two strings wild and pattern.
Determine if the given two strings can be matched given that,
wild string may contain * and ? but string pattern will not.
* and ? can be converted to another character according to the following rules:
* --> This character in string wild can be replaced by any sequence of characters,
it can also be replaced by an empty string.
? --> This character in string wild can be replaced by any one character.
 */
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool match(string wild, string pattern)
    { int a=pattern.size();
        int b=wild.size();
        vector<vector<bool>> dp(a+1,vector<bool>(b+1,false));
        dp[0][0]=true;
        for(int j=1;j<=b;j++)
        {
            if(wild[j-1]=='*' || wild[j-1]=='?')
            {
                dp[0][j]=dp[0][j-1];
            }
        }
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=b;j++)
            {
                if(wild[j-1]==pattern[i-1] || wild[j-1]=='?')
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    if(wild[j-1]=='*')
                    {
                        dp[i][j]=dp[i][j-1]||dp[i-1][j];
                    }
                }
            }
        }
        return dp[a][b];
    }
};
int main()
{
    string wild, pattern;
    cout<<"Enter wild and pattern strings:\n";
    cin>>wild>>pattern;
    Solution ob;
    bool x=ob.match(wild, pattern);
    cout<<"Can string wild be made equal to string pattern:";
    if(x)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}