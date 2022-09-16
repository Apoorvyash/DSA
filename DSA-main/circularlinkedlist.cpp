#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next= NULL;
    }
};
void deletehead(node* &head){
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete head;
}
void deletenode(node* &head, int pos){
    int count=0;
    if(pos==1){
        deletehead(head);
    }
    node* temp=head;
    node* todelete= NULL;
    while(count !=pos-1){
        temp=temp->next;
        count++;
    }
    temp->next=temp->next->next;
    todelete=temp->next;
    delete todelete;

}
void insertathead(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
    }
    node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    n=head;
}
void display(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<"->";
    }while(temp!=head);
}
void inserttail(node* &head, int val)
{
    if(head==NULL){
        insertathead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}
int main(){
    node* head=NULL;
    inserttail(head,0);
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,4);
    deletenode(head,3);
    display(head);
    return 0;
}