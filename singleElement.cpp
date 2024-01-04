//
// Created by ppkkv on 04-01-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleElement(int arr[] ,int N) {
        sort(arr,arr+N);
        if(arr[0]!=arr[1])
            return arr[0];
        for(int i=1;i<N-1;i++){
            if(arr[i-1]!=arr[i]&&arr[i]!=arr[i+1])
                return arr[i];
        }
        if(arr[N-1]!=arr[N-2])
            return arr[N-1];
    }
};

int main() {
    int N;
    cout<<"Enter no of elements in Array:\n";
    cin>>N;
    int arr[N];
    cout<<"Enter Array:\n";
    for(int i=0 ; i<N ; i++)
        cin>>arr[i];

    Solution ob;
    cout<<"Element occuring once:" <<ob.singleElement(arr,N);
    cout<<"\n";
    return 0;
}