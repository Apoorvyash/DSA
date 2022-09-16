#include<bits/stdc++.h>
using namespace std;

// Head recursive C++ program to reverse a linked list
#include <iostream>
using namespace std;
 
// Linked list node
class Node {
public:
    int data;
    Node* next;
 
    // constructor: automatically assigns the value to the
    // data and next pointer to NULL
    Node(){};
    Node(int val)
        : data(val)
        , next(NULL){};
};
 
void reverseUtil(Node* curr, Node* prev, Node** headref)
{
    // Base Case - If curr is last node
    if (curr->next == NULL) {
        // Update head of the linked list
        *headref = curr;
        // Update next to prev node
        curr->next = prev;
        return;
    }
    // Recursive Call for next node
    reverseUtil(curr->next, curr, headref);
    // Update next to prev node
    curr->next = prev;
}
 
void reverse(Node** headref)
{
    // If linked list is empty or contains single node
    if (*headref == NULL || (*headref)->next == NULL)
        return;
    // Call reverseUtil() with prev as NULL
    reverseUtil(*headref, NULL, headref);
}
 
// Function to insert a node at the end of linked list
void push(Node** headref, int x)
{
    Node* newptr = new Node(x);
    if (*headref == NULL) {
        *headref = newptr;
    }
    else {
        Node* temp = *headref;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newptr;
    }
}
 
// Functio to print the linked list
void print(Node* headref)
{
    while (headref != NULL) {
        cout << headref->data << " ";
        headref = headref->next;
    }
    cout << "\n";
}      

int main(){
     Node* head = NULL;
 
    // head->1->2->3->4->5->6->NULL
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);
 
    cout << "Given Linked List\n";
    print(head);
 
    reverse(&head);
    cout << "Reversed Linked List\n";
    print(head);
    return 0;
}