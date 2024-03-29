//
// Created by ppkkv on 29-03-2024.
//
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool isEularCircuitExist(int n, vector<int>gra[]){
        // Code here
        vector<set<int>> dp1(n+1);
        for(int i=0;i<n;i++) {
            for(auto j:gra[i]) {
                dp1[i].insert(j);
                dp1[j].insert(i);
            }
        }
        for(auto i:dp1) if(i.size()%2) return false;
        return true;
    }

};

//{ Driver Code Starts.
int main(){
        int V, E;
        cin >> V >> E;
        vector<int>adj[V];
        for(int i = 0; i < E; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isEularCircuitExist(V, adj);
        if(ans)
            cout << "1\n";
        else cout << "0\n";
    return 0;
}