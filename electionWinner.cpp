#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;

class Solution{
  public:
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        string name;
        int cnt=0;
        unordered_map<string,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second>cnt){
                name=it->first;
                cnt=it->second;
            }else if(it->second==cnt){
                if(name>it->first){
                    name=it->first;
                }
            }
        }
        return {name,to_string(cnt)};
    }
};
int main()
{        
    int n;
    cin>>n;
    string arr[n];
        
    for (int i=0;i<n;i++)
        cin>>arr[i];
    Solution obj;
    vector<string> result = obj.winner(arr,n);
    cout<<result[0] << " " << result[1] << endl;
    return 0;
}