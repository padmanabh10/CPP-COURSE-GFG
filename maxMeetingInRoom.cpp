//
// Created by ppkkv on 22-12-2023.
//
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F)
    {
        vector<int> val;
        vector<pair<int,pair<int,int>>> temp;
        for(int i=0;i<N;i++)
        {
            temp.push_back({F[i],{i,S[i]}});
        }
        sort(temp.begin(),temp.end());
        val.push_back(temp[0].second.first+1);
        int tocompare = temp[0].first;
        for(int i=0;i<N-1;i++)
        {
            if(tocompare < temp[i+1].second.second)
            {
                int toadd = temp[i+1].second.first+1;
                val.push_back(toadd);
                tocompare = temp[i+1].first;
            }

        }
        sort(val.begin(),val.end());
        return val;
    }
};
int main()
{
    int n;
    cout<<"Enter No of Meetings:"<<endl;
    cin>>n;
    vector<int> S(n),F(n);
    cout<<"Enter Start Times of Meetings:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>S[i];
    }
    cout<<"Enter Finish Times of Meetings:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>F[i];
    }
    Solution ob;
    vector<int> ans=ob.maxMeetings(n,S,F);
    cout<<"Meeting Nos:";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
        if(i!=ans.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}