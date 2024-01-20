//
// Created by ppkkv on 20-01-2024.
//
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left, *right;
};
Node* newNode(int key)
{
    Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return (node);
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
    int ans=0;

    int help(Node*root){

        if(root==NULL)
            return 0;
        if(root->left == NULL && root->right == NULL)
            return root->key-1;
        int p=help(root->left);
        int q=help(root->right);
        ans+=abs(p);
        ans+=abs(q);
        return p+q+root->key-1;

    }
    int distributeCandy(Node* root)
    {
        int k=help(root);
        return ans;
    }
};
int main() {
        string str;
        getline(cin, str);

        Node *root = buildTree(str);
        Solution ob;
        cout << ob.distributeCandy(root) << "\n";
    return 0;
}