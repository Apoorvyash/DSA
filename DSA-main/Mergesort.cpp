#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[], int s, int mid, int e){
    int no1=mid-s+1;
    int no2=e-mid;
    int arr1[no1];
    int arr2[no2];
    for(int i=0; i<no1; i++){
        arr1[i]=arr[i+s];
    }
    for(int i=0; i<no2; i++){
        arr2[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=s;
    while(i<no1 && j<no2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }

    }
    while(i<no1){
        arr[k]=arr1[i];
        i++;k++;

    }
    while(j<no2){
        arr[k]=arr2[j];
        j++;k++;
    }
    
}
void Mergesort(int arr[], int s, int e){
    if(s<e){
        int mid=(s+e)/2;
        Mergesort(arr,s,mid);
        Mergesort(arr,mid+1,e);

        Merge(arr, s, mid, e);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    Mergesort(arr, start, end);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
