//
// Created by ppkkv on 02-01-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long int maxSumWithK(long long int a[], long long int n, long long int k)
    {
        long long int prefixSum[n];
        prefixSum[0] = a[0];

        // Calculate the prefix sum
        for (long long int i = 1; i < n; ++i) {
            prefixSum[i] = prefixSum[i - 1] + a[i];
        }

        long long int maxSum = prefixSum[k - 1];
        long long int minPrefixSum = 0;

        for (long long int i = k; i < n; ++i) {
            minPrefixSum = std::min(minPrefixSum, prefixSum[i - k]);
            maxSum = std::max(maxSum, prefixSum[i] - minPrefixSum);
        }

        return maxSum;
    }
};
int main() {
    long long int n, k, i;
    cout<<"Enter no of elements in array:\n";
    cin >> n;
    long long int a[n];
    cout<<"Enter array:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"Enter k:\n";
    cin >> k;
    Solution ob;
    cout <<"Largest sum of the subarray containing at least k numbers:"<< ob.maxSumWithK(a, n, k) << endl;
    return 0;
}