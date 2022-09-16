#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *right = NULL ;
    node *left = NULL ;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data <<" ";
    
    
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
// static int idx = 
// node* buildTree()
// void insert(node* node){

// }
int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    postDorder(root);
    return 0;
}