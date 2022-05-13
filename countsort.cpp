#include<bits/stdc++.h>
using namespace std;
void part(int arr[], int s, int piv){
    int pivot=arr[piv];
    int i=s-1;
    for(int i=0; i<n; i++){
        if 
    }
}
void Quicksort(int arr[], int s, int e){
    if(s<e){
        int pi=part(arr,s,e);
        Quicksort(arr,s,pi-1);
        Quicksort(arr,pi+1,e);

        
    }
}
int main(){
    arr[6]={9,13,4,2,10,3};
    Quicksort(arr,0,6);
    return 0;
}