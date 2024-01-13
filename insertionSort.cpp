//
// Created by ppkkv on 13-01-2024.
//
#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
class Solution
{
public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node* res = new Node(-1);
        Node* temp = res;
        Node* curr = head_ref;
        while(curr)
        {
            temp = res;
            while(temp->next and curr->data>=temp->next->data)
            {
                temp = temp->next;
            }

            Node* nextNode = temp->next;
            temp->next = curr;
            curr = curr->next;
            temp->next->next = nextNode;
        }

        return res->next;
    }

};
int main()
{

        int n;
        cin >> n;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < n; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else
            {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;

        head = ob.insertionSort(head);
        printList(head);

        cout << "\n";
    return 0;
}