#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    node(int val){
        this->data = val;
        this->next = NULL;
    }
};
void inserttail(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    
}

struct node* reverseList(struct node *head)
    {
        node* curr= head;
        node* prev;
        node* next;
        // code here
        // return head of reversed list
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        prev=head;
    return head;
   
    }

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
int main(){
    node *head1 = NULL;
    inserttail(head1,1);
    inserttail(head1,3);
    inserttail(head1,5);
    inserttail(head1,7);
    reverseList(head1);
    display(head1);
    return 0;
}