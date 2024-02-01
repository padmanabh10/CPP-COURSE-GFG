//
// Created by ppkkv on 01-02-2024.
//
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        unordered_set<char> st;
        for(auto &c: s)
        {
            if(isalpha(c))st.insert(tolower(c));
        }

        return st.size()==26;
    }

};
int main()
{
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;

    return(0);
}