//
// Created by ppkkv on 18-01-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int min_sprinklers(int gallery[], int n)
    {
        vector<long long int> jump(n, -1);

        for(int i = 0; i < n; i++){
            long long int x = max(0, i-gallery[i]) , y = min(n-1, i+gallery[i]);
            jump[x] = max(jump[x], y);
        }

        int ans = 0;
        long long int max_reachable = -1;
        for(int i = 0; i < n; ans += 1){
            long long int dist = max(jump[i], max_reachable);
            if(dist < 0 or ans > n)
                return -1;
            if(dist >= n)
                return ans;
            for(; i <= dist and i < n; i++){
                if(jump[i] > 0)
                    max_reachable = max(max_reachable, jump[i]);
            }
            dist = max_reachable;
        }
        return ans;
    }
};
int main()
{
    int n;
    cin>>n;

    int gallery[n];
    for(int i=0; i<n; i++)
        cin>> gallery[i];
    Solution obj;
    cout<< obj.min_sprinklers(gallery,n) << endl;
    return 1;
}