//
// Created by ppkkv on 22-01-2024.
//
#include<bits/stdc++.h>
using namespace std;

// A Tree node
struct Node
{
    int key;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}
class Solution
{
public:
    void f(Node *root, int sum, int cs, vector<int> temp, vector<vector<int>> &ans){
        if(root==NULL) return;
        temp.push_back(root->key);
        cs+=root->key;
        if(cs == sum){

            ans.push_back(temp);
        }

        f(root->right, sum, cs, temp, ans);
        f(root->left, sum, cs, temp, ans);
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        int cs=0;
        f(root, sum, cs, temp, ans);
        return ans;
    }
};
int main ()
{
    int sum;
    cin >> sum;
    getchar();

    string inp;
    getline(cin, inp);

    struct Node* root = buildTree(inp);

    Solution ob;
    vector<vector<int>> ans = ob.printPaths(root, sum);
    sort(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
            cout << "\n";
    }
    return 0;
}