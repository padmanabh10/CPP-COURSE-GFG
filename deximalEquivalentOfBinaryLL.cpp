//
// Created by ppkkv on 03-02-2024.
//
#include<iostream>
using namespace std;
const long long unsigned int MOD = 1000000007;
struct Node
{
    bool data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
class Solution
{
public:
    // Should return decimal equivalent modulo 1000000007 of binary linked list
    long long unsigned int decimalValue(Node *head)
    {
        // Your Code Here
        if (head == NULL)
        {
            return 0;
        }

        long long int ans = 0;
        struct Node *p = head;
        while (p)
        {
            ans = (ans << 1) | p->data;
            ans = ans % 1000000007;
            p = p->next;
        }

        return ans;
    }
};
void append(struct Node** head_ref, struct Node **tail_ref, bool new_data)
{

    struct Node* new_node = new Node(new_data);

    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
bool isEmpty(struct Node *head);
int main()
{
    bool l;
    int i, n;
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        Solution obj;
        cout << obj.decimalValue(head) << endl;

    return 0;
}