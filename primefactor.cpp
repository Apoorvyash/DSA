#include<bits/stdc++.h>
using namespace std;
int i=2;
void primefactor(int n){
    
    if(n==1 ){
        return;
    }
    while(n%i!=0){
        i++;
    }
    cout<<i<<" ";
    primefactor(n/i);
    
}
int main(){
    primefactor(100);
    
    return 0;
}