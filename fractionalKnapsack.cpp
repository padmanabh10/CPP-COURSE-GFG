//
// Created by ppkkv on 26-01-2024.
//
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};
class Solution
{
public:
    static bool cmp(Item &a,Item &b){
        float aval = 1.0 * a.value/a.weight;
        float bval = 1.0 * b.value/b.weight;
        return aval>bval;
    }

    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double ans = 0;
        sort(arr,arr+n,cmp);
        for(int i=0;i<n;i++){
            int take = min(W,arr[i].weight);
            double valOfOne = 1.0 * arr[i].value/arr[i].weight;
            ans += take*valOfOne;
            W -= take;
        }
        return ans;

    }

};
int main()
{
    cout<<setprecision(6)<<fixed;

    int n, W;
    cin>>n>>W;

        Item arr[n];
        //value and weight of each item
        for(int i=0;i<n;i++){
            cin>>arr[i].value>>arr[i].weight;
        }

        //function call
        Solution ob;
        cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
    return 0;
}