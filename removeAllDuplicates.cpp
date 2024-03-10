//
// Created by ppkkv on 10-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    string removeDuplicates(string str) {
        // code here
        string ans = "";
        for(int i=0;i<str.length();i++){

            if(ans.length()==0) ans.push_back(str[i]);

            if(ans.find(str[i])==string::npos){
                ans.push_back(str[i]);
            }
            else{


            }
        }
        return ans;
    }
};
int main() {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";

    return 0;
}