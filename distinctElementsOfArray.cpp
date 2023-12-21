//
// Created by ppkkv on 21-12-2023.
//
#include <bits/stdc++.h>
using namespace std;
int distinctElements(int A[],int n)
{
    int count=0;
    bool isDistinct=true;
    for(int i=0;i<n;i++) {
        isDistinct = true;
        for (int j = i - 1; j >= 0; j--) {
            if (A[i] == A[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct == true)
            count++;
    }
    return count;
}
int main() {
    cout << "Enter no of elements in the Array:";
    int N;
    cin >> N;
    int arr[N];
    cout<<"Enter Array:";
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    cout<<"No of Distinct Elements:"<<distinctElements(arr,N);
}