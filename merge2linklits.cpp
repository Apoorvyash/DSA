#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
int length(node* head){
    node* temp=head;
    int i=0;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        i++;
    }
    return i;
}
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

node* merge(node* &head1, node* &head2)
{
    node* temp1=head1;
    node* temp2=head2;
    node* dummy=new node(-1);
    node* temp3=dummy;
    int l1=length(head1);
    int l2=length(head2);
    int n=l1+l2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data){
            temp3->next=temp1;
            temp1=temp1->next;
        }
        else{
            temp3->next=temp2;
            temp2=temp2->next;
        }
        temp3=temp3->next;
    }
    while(temp1!=NULL){
        temp3->next=temp1;
            temp1=temp1->next;
            temp3=temp3->next;
    }
    while(temp2!=NULL){
        temp3->next=temp2;
            temp2=temp2->next;
            temp3=temp3->next;
    }
    node* t=dummy->next;
    return t;
    
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
    node* head1=NULL;
    node* head2=NULL;
    
    inserttail(head1,1);
    inserttail(head1,3);
    inserttail(head1,5);
    inserttail(head1,7);
    inserttail(head2,2);
    inserttail(head2,4);
    inserttail(head2,6);
    inserttail(head2,8);
    node* newhead=merge(head1,head2);
    display(newhead);
    return 0;
}