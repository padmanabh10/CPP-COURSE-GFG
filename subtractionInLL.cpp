//
// Created by ppkkv on 04-02-2024.
//
#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// Linked List Class
class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(NULL), tail(NULL) {}

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
private:
    Node* rev(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr){
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    Node* trim(Node* head){
        while(head&&head->next&&head->data==0){
            head=head->next;
        }
        return head;
    }
    int size(Node* head){
        int s = 0;
        while(head){
            s++;
            head=head->next;
        }
        return s;
    }
    bool isGreator(Node* h1,Node*h2){
        while(h1&&h1->data==h2->data){
            h1=h1->next;
            h2=h2->next;

        }
        if(h1&&h1->data<h2->data){
            return false;
        }
        return true;
    }
public:

    Node* subLinkedList(Node* head1, Node* head2) {

        head1=trim(head1);
        head2=trim(head2);
        int n = size(head1);
        int m = size(head2);
        //standrize by making sure head1 is greator always greator than head2;
        if(n<m){
            swap(head1,head2);
        }else if(n==m && !isGreator(head1,head2)){
            swap(head1,head2);
        }
        head1 = rev(head1);
        head2 = rev(head2);
        Node* dummy = new Node(-1);
        Node* curr = dummy;
        int rem = 0, val1,val2;
        while(head1){
            val1 = head1->data;
            val2 = head2? head2->data+rem:rem;
            if(val2>val1){
                val1+=10;
                rem=1;
            }else{
                rem=0;
            }
            curr->next=new Node(val1-val2);
            curr=curr->next;
            head1=head1->next;
            head2=head2?head2->next:head2;
        }

        Node* ans = rev(dummy->next);
        ans=trim(ans);
        return ans;
    }
};
void printList(Node* n) {
    while (n) {
        cout << n->data;
        n = n->next;
    }
    cout << endl;
}

int main() {
        int n;
        cin >> n;
        LinkedList LL1;
        string l1,l2;
        cin>>l1;
        for (int j = 0; j < n; ++j) {
            int x=(l1[j]-'0');
            LL1.insert(x);
        }

        int m;
        cin >> m;
        LinkedList LL2;
        cin>>l2;
        for (int j = 0; j < m; ++j) {
            int x=(l2[j]-'0');
            LL2.insert(x);
        }

        Solution ob;
        Node* res = ob.subLinkedList(LL1.head, LL2.head);
        printList(res);

    return 0;
}