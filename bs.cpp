//
// Created by ppkkv on 14-09-2024.
//
#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
#include<set>
#include <unordered_map>
using namespace std;
int bs(int low,int mid ,int high,int f){
    int temp_low=low;
    int temp_high=high;
    int temp_mid=mid;
    
}
int count(vector<int> a){
    int f;
    cout<<"enter number to find: ";
    cin>>f;
    int lower_bound,upper_bound;
    int low=0;
    int high=a.size()-1;
    int mid=(low + high)/2;
    while(low<high){
        int count+=bs(low,mid,high,f);
    }
    return count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    cout<<count(a);

    return 0;
}
