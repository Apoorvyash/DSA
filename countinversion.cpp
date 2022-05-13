#include<bits/stdc++.h>
using namespace std;
long long merge(int arr[],int s,int mid, int e){
    long long inv=0;
    int no1=mid-s+1;
    int no2=e-mid;
    int a[no1];
    int b[no2];
    for(int i=0; i<no1; i++)
    {
        a[i]=arr[s+i];
    }
    for(int j=0; j<no2; j++)
    {
        b[j]=arr[mid+j+1];
    }
    int i=0,j=0;
    int k=0;
    while (i<no1 && j<no2)
    {
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;k++;
        }
        else{
            arr[k]=b[j];
            j++;k++;
            inv+=no1-i;
        }
    } 
    while(i<no1){
        arr[k]=a[i];
        i++;k++;

    }
    while(j<no2){
        arr[k]=b[j];
        j++;k++;
    }
    return inv;
    
}
long long Mergesort(int arr[], int s, int e){
    long long inv=0;
    if(s<e)
    {
        int mid=(s+e)/2;
        inv+=Mergesort(arr, s,mid);
        inv+=Mergesort(arr,mid+1,e);
        inv+=merge(arr,s,mid,e);
    }
    return inv;
}
int main(){

    int a;
    int arr[3]={3,2,1};
    cout<<Mergesort(arr,0,2);
    
    return 0;
}