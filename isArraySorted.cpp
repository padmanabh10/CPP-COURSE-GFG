//
// Created by ppkkv on 21-12-2023.
//
#include <bits/stdc++.h>
using namespace std;
string isArraySorted(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(A[i]<A[i-1])
        {

            return "No";
        }

    }
    return "Yes";

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
    cout<<isArraySorted(arr,N);
}