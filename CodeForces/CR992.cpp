#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include<set>
#include <unordered_map>
using namespace std;
int calculateS(vector<int> p) {
    int n = p.size();
    int S = 0;
    for (int l = 0; l < n; ++l) {
        int minVal = p[l];
        for (int r = l; r < n; ++r) {
            minVal = min(minVal, p[r]);
            S += minVal;
        }
    }
    return S;
}
vector<vector<int>> generatePermutations(int n) {
    vector<vector<int>> permutations;
    vector<int> nums;
    for (int i = 1; i <= n; ++i) {
        nums.push_back(i);
    }
    do {
        permutations.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    return permutations;
}
void solution(int n,int k) {
    vector<vector<int>> sols;
    vector<vector<int>> input= generatePermutations(n);
    int maxSum=0;
    int perms=1;
    for (int i = 1; i <= n; ++i) {
        perms *= i;
    }
    for(int i=0;i<perms;i++){
        int temp= calculateS(input[i]);
        if(temp>=maxSum){
            if(maxSum<temp) {
                maxSum = temp;
                sols.clear();
            }
            if(temp == maxSum){
                sols.push_back(input[i]);
            }
        }
    }
    if(sols.size()<k){
        cout<<-1;
    }
    else
            for (int i = 0; i < n; i++) {
                cout << sols[k-1][i] << " ";


        }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;

        solution(n,k);
        cout<<endl;
    }

    return 0;
}
