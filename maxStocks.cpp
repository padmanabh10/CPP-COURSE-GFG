//
// Created by ppkkv on 24-12-2023.
//
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int buyMaximumProducts(int n, int k, int price[])
    {
        //Write your code here
        vector<pair<int, int>>temp;
        for(int i=0; i<n; i++)
        {
            temp.push_back({price[i], i+1});
        }
        sort(temp.begin(), temp.end());
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(temp[i].first<=k)
            {
                int x=(k)/(temp[i].first);
                int bought=min(temp[i].second, x);
                k-=bought*temp[i].first;
                cnt+=bought;
            }else break;
        }
        return cnt;
    }
};
int main()
{
    int n, k;
    cout<<"Enter No of days and Amount of money customer has:\n";
    cin >> n >> k;
    int price[n];
    cout<<"Enter Price on each day:\n";
    for(int i = 0 ; i < n; i++)
    {
        cin >> price[i];
    }
    Solution ob;
    int ans = ob.buyMaximumProducts(n, k, price);
    cout <<"Max No of stocks customer can buy:"<< ans<<endl;
    return 0;
}