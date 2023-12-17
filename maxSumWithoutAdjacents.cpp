
#include <bits/stdc++.h>

using namespace std;


class Solution{
public:	
	
	int findMaxSum(int *arr, int n) {
	    
if(n==1) return arr[0];
    if(n==2) return max(arr[0],arr[1]);
    int dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
    }
    return dp[n-1];
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}