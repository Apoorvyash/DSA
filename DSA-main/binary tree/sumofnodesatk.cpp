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
int sumAtK(Node* root,int k){
    vector<int> vec;
    if(root == NULL){
        return -1;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int currlevel = 0,sum=0;
    while(q.empty()!=true){
        
        Node *node = q.front();
        q.pop();
        if(k==currlevel){
            sum += node->data;
        }
        if (node->left!=NULL){
            
            q.push(node->left);
        }
        if (node->right!=NULL){
            q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            currlevel++;
        }

        return sum;
    }
}
int main(){
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << sumAtK(root, 1);
    return 0;
}
