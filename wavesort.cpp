#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int x,int y){
    int temp=arr[y];
    arr[y]=arr[x];
    arr[x]=temp;
}
void wavesort(int arr[], int n){
    int i=1;
    while(i<n){
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr,i,i+1);
        }
        i+=2;
    }
}
int main(){
    int arr[7]={1,0,3,2,1,4,5};
    wavesort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}