#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
int search(int inorder[], int val, int start, int end){
    for (int i = start; i <=end; i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}
Node* buildtree(int preorder[], int inorder[], int start, int end){
    static int idx = 0;
    if(start>end){
        return NULL;
    }
    int val = preorder[idx];
    
    idx++;
    Node* curr = new Node(val);
    if(start==end){
        return curr;
    }
    int pos = search(inorder, curr, start, end);
    
    curr->left= buildtree(preorder, inorder, start, pos-1);
    curr->right = buildtree(preorder, inorder, pos + 1, end);
    return curr;
}
void inorderprint(Node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout << root->data<<" ";
    inorderprint(root->right);
}
int main(){
    int inorder[] = {4, 2, 1, 5, 3};
    int preorder[] = {1,2,4,3,5};
    Node *root = buildtree(preorder, inorder, 0, 4);
    inorderprint(root);
    return 0;
}

