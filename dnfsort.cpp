#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int x,int y){
    int temp=arr[y];
    arr[y]=arr[x];
    arr[x]=temp;
}
DNFsort(int arr[], int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,mid,low);
            low++;
            mid++;
        }
        if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr,mid, high);
            high--;
        }
    }
}
int main(){
    int arr[7]={1,0,2,2,1,0,1};
    DNFsort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i];
    }
    return 0;
}