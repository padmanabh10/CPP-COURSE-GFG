//
// Created by ppkkv on 07-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000
// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

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
        if (i >= ip.size()) break;
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
class Solution{
public:
    int ans=0;
    int solve(Node *root, int a, int b){
        if(!root)
            return 0;
        int left=solve(root->left,a,b);
        int right=solve(root->right,a,b);

        if(root->data==a || root->data==b){
            if(left|| right)
                ans=max(left,right);
            else
                return 1;
        }
        else if(left&& right)
            ans=left+right;


        else if(left||right)
            return max(left,right)+1;

        return 0;

    }
    int findDist(Node* root, int a, int b) {
        int a5s=solve(root,a,b);
        return ans;
    }
};
int main() {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        int n1, n2;
        cout<<"Check\n";
        scanf("%d %d ", &n1, &n2);
        Solution ob;
        cout << ob.findDist(root, n1, n2) << endl;
    return 0;
}