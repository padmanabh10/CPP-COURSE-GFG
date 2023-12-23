//
// Created by ppkkv on 23-12-2023.
//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {

        unordered_map<int,int> mp;
        int a = n/k;

        for(int i =0;i<n;i++){
            mp[arr[i]]++;
        }

        int count =0;


        for(auto bs  : mp){
            if(bs.second>a){
                count++;
            }
        }
        return count;
    }
};
int main() {
    int n, i;
    cout<<"Enter No of elements in Array:\n";
    cin >> n;


    int arr[n];
    cout<<"Enter Array:\n";
    for (i = 0; i < n; i++) cin >> arr[i];
        int k;
    cout<<"Enter k:\n";
    cin >> k;
    Solution obj;
    cout<<"No of elements with more than n/k Occurrences : " << obj.countOccurence(arr, n, k) << endl;

    return 0;
}