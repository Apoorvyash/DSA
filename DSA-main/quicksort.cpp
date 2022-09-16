#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int a, int b){
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}
int part(int arr[], int l, int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,j,i);
        }
    }
    
    swap(arr,i+1, r);
    return i+1; 
}
void quicksort(int arr[], int l , int r){
    if(l<r){
        int pi=part(arr,l,r);
        quicksort(arr, l,pi-1);
        quicksort(arr, pi+1, r);


    }
}
int main(){
    int arr[10]{1,5,2,8,4,7,6,8,86,43};
    quicksort(arr,0,9);
    for(int i=0; i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}