//
// Created by ppkkv on 12-01-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> st;
        int n = q.size();
        for(int i = 0; i < k; i++)
            st.push(q.front()), q.pop();
        for(int i = 0; i < k; i++)
            q.push(st.top()), st.pop();
        for(int i = 0; i < n - k; i++)
            q.push(q.front()), q.pop();
        return q;
    }
};
int main() {
    int n, k;
    cin >> n >> k;
    queue<int> q;
    while (n-- > 0)
    {
        int a;
        cin >> a;
        q.push(a);
    }
    Solution ob;
    queue<int> ans = ob.modifyQueue(q, k);
    while (!ans.empty())
    {
        int a = ans.front();
        ans.pop();
        cout << a << " ";
    }
    cout << endl;
}