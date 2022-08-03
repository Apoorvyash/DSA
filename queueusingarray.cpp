#include<bits/stdc++.h>
using namespace std;
#define n 100
class que{
    int* arr;
    int front;
    int back;

    public:
    que(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue overflow";
            return; 
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front ==-1 || front >back){
            cout<<"queue empty";
            return;
        }
        
        front++;

    }
    int peek(){
        if(front ==-1 || front >back){
            cout<<"queue empty";
            return -1;
        }
        return arr[front];

    }
    bool empty(){
        if(front ==-1 || front >back){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    return 0 ;
}