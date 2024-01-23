//
// Created by ppkkv on 23-01-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findOrder(int n, int m, vector<vector<int>> edges)
    {
        unordered_map<int, list<int>> adj;
        vector<int> indegrees(n,0);

        for(int i=0;i<m;i++){
            int u = edges[i][1];
            int v = edges[i][0];

            adj[u].push_back(v);
            indegrees[v]++;
        }

        queue<int> q;
        for(int i=0;i<n;i++)
            if(!indegrees[i])
                q.push(i);

        int count=0;
        vector<int> ts;

        while(!q.empty()){
            int f = q.front();
            q.pop();
            count++;

            ts.push_back(f);

            for(auto child : adj[f]){
                indegrees[child]--;

                if(!indegrees[child])
                    q.push(child);
            }
        }

        if(count==n)
            return ts;

        ts.clear();
        return ts;
    }
};
int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    int u, v;

    vector<vector<int>> prerequisites;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        prerequisites.push_back({u,v});
    }

    vector<int> adj[n];
    for (auto pre : prerequisites)
        adj[pre[1]].push_back(pre[0]);

    Solution obj;
    vector <int> res = obj.findOrder(n, m, prerequisites);
    if(!res.size())
        cout<<"No Ordering Possible"<<endl;
    else
        cout << check(n, res, adj) << endl;
    return 0;
}