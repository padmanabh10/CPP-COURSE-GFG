//
// Created by ppkkv on 01-01-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPair(vector<int> nums, int k)
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]%k]++;

        for(auto i:nums)
        {
            int j=mp[i%k]+mp[k-(i%k)];
            if(j%2!=0)
                return false;
        }
        return true;
    }
};
int main() {

    int n, k;
    cout<<"Enter no of elements in array and k:\n";
    cin >> n >> k;
    vector<int> nums(n);
    cout<<"Enter Array:\n";
    for (int i = 0; i < nums.size(); i++)
        cin >> nums[i];
    Solution ob;
    bool ans = ob.canPair(nums, k);
    if (ans)
        cout <<"Can be divided into pairs such that sum of every pair is divisible by k: True\n";
    else
        cout << "Can be divided into pairs such that sum of every pair is divisible by k: False\n";

    return 0;
}