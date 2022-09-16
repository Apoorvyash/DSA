#include<bits/stdc++.h>
using namespace std;
void zigzag (int m,int n,int arr[3][3]){
    int i, j, k;
    for (k = 0; k <= m - 1; k++){
        i = k;
        j = 0;
        while(i>=0){
            cout << arr[i][j]<<" ";
            i--;
            j++;
        }
    }
    for (k= 1; k <= n - 1; k++){
        i = m - 1;
        j = k;
        while(j<=n-1){
        cout << arr[i][j]<<" ";
        i--;
        j++;
        }
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    zigzag( 3, 3,arr);
    return 0;
}