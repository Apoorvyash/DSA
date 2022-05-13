#include<bits/stdc++.h>
using namespace std;
bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool ratinMaze(int **arr,int x,int y, int n,int **solmaze){
    if(x==n-1 && y==n-1){
        solmaze[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        solmaze[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solmaze)){
            return true;

        }
        if(ratinMaze(arr,x,y+1,n,solmaze)){
            return true;
    
        }
        solmaze[x][y]=0;        //backtracking
        return false;
    
}
return false;
}
int main(){
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0; i<n; i++){
        arr[i]=new int[n];

    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        cin>>arr[i][j];
        }

    }
    int **solmaze=new int*[n];
    for(int i=0;i<n;i++){
        solmaze[i]=new int[n];
        for(int j=0;j<n;j++){
            solmaze[i][j]=0;
        }
    }
    if(ratinMaze(arr,0,0,n,solmaze)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n ; j++){
            cout<<solmaze[i][j]<<" ";
        }
        cout<<endl;
        }
        
    }


    
    return 0;
}