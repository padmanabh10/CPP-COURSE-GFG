//
// Created by ppkkv on 05-03-2024.
//
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxIndexDiff(int a[], int n)
    {
        vector<int> lmin(n),rmax(n);
        lmin[0]=a[0];
        rmax[n-1]=a[n-1];
        for(int i=1;i<n;i++) {
            lmin[i]=min(lmin[i-1],a[i]);
            rmax[n-i-1]=max(rmax[n-i],a[n-i-1]);
        }
        int ans=0;
        int i=0,j=0;
        while(i<n && j<n) {
            if(lmin[i]<=rmax[j]) {
                ans=max(ans,j-i);
                j++;
            }
            else i++;
        }
        return ans;
    }
};
int main()
{
        int num;
        //size of array
        cin>>num;
        int arr[num];

        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;

        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;


    return 0;
}