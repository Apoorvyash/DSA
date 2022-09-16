#include<bits/stdc++.h>
using namespace std;
void cyclicredundancycheck(string crc, string msg){
    string encoded = "";
    int n = crc.length();
    int m = msg.length();
    encoded += msg;
    for (int i = 1; i < n; i++){
        encoded += '0';
    }
    for (int i = 0; i < encoded.length()-n; i++){
        for (int j = 0; j< n;j++){
            if(encoded[i+j]=encoded[i+j]==crc[j]){
                encoded[i + j] = 0;
            }
            else{
                encoded[i + j] = 1;
            }
        }
        for (; i < encoded.length() && encoded[i]!=1; i++)
            ;
    }
    cout << encoded;
}
int main(){
    cyclicredundancycheck("1101", "101101110");
    return 0;
}