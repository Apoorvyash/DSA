#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node* next;
    node* prev;
    int value;
    node(int val)
    {
        value=val;
        next=NULL;
        prev=NULL;
    }
};
void inserthead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    
    
    head = n;
}
void deletehead(node* &head){
    
}
void deletenode(node* &head, int val){
    if(head->value==val){
        deletehead(head);
    }
    node* temp=head;
    while(temp->next->value!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    if(temp->next!=NULL){
        temp=temp->next;
    }
    
    delete todelete;
    
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

void inserttail(node* &head, int value)
{   
    if(head==NULL){
        inserthead(head,value);
    }
    node* n=new node(value);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
int main(){
    node* head=NULL;
    inserthead(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,54);
    inserttail(head,5);
    deletenode(head, 3);
    display(head);
    return 0;
}