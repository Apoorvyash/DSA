#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    node(int val)
    {
        data=val;
        next=NULL;
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
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
void inserthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        return false;
    }
}
void deletion(node* &head, int val){
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    
    delete todelete;
}
void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
        
    delete todelete;
    
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* current=head;
    node* nextptr;
    while(current!=NULL){
         nextptr=current->next;
         current->next=prevptr;
         prevptr=current;
         current=nextptr;

    }
    return prevptr;
}
node* reversek(node* &head, int k)
{
    node* prevptr=NULL;
    node* current=head;
    node* nextptr;
    int count=0;
    while(current!=NULL && count<k){ 
        nextptr=current->next;
        current->next=prevptr;
        prevptr=current;
        current=nextptr;
        count++;
        
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}
bool detectcycle(node* head){
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void makecycle(node* &head, int k){
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==k){
            startNode=temp;
            
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;

}
void deletecycle(node* &head){
    node* slow = head;
    node* fast = head;

    do{
        slow=slow->next;
        fast=fast->next->next;       
    }while(slow!=fast);
    fast=head;
    int count=1;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int length(node* head){
    int l=0;
    node* temp = head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}

void appendknodes(node* &head, int k){
    node* temp= head;
    int l=length(head);
    int n=l-k-1;
    node* tail=head;
    while(tail->next!=NULL ){
        tail=tail->next;
    }

    while( n>0){
        temp=temp->next;
        n--;
    }
    tail->next=head;
    head=temp->next;
    temp->next=NULL;
    
}

void intersection(node* head1, node* head2)
{   
    bool flag=false;
    int l1 = length(head1);
    int l2 = length(head2);
    node* temp1=head1;
    node* temp2=head2;
    if(l1>l2)
    {   
        int count=0;
        while(count<l1){
            if(temp1->data==temp2->data)
            {
                cout<<temp1->data;
                flag=true;
            } 
            temp1=temp1->next;
            temp2=temp2->next;
            count++;           
        }
    
    }
    else
    {
        int count=0;
        while(count<l2){
            if(temp1->data==temp2->data)
            {
                cout<<temp1->data;
                flag=true;
            }   
            count++;
            temp1=temp1->next;
            temp2=temp2->next;         
        }
    }
    if(flag==false)
    {
        cout<<"-1";
    }
}

int main(){
    // cout<<"this is a  linked list"<<endl;
    node* head= NULL;
    node*head1=NULL;
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,4);
    inserttail(head1,5);
    inserttail(head1,6);
    inserttail(head1,10);
    inserttail(head1,8);
    intersection(head, head1);

    // appendknodes(head,3);
    
    // node* temp=head;
    // while(temp->next!=NULL){
        
    // }
    //  deletecycle(head);
    // cout<<detectcycle(head);

    // display(head);
    // display(head);
    // cout<<search(head,4)<<endl;
    // display(reverse(head));
    // node* newhead=reversek(head, 2);
    
    


    return 0;
}