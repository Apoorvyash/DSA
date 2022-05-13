#include<bits/stdc++.h>
using namespace std;
string keypad={"","abc","def","hij","klm","nop","qrs","tuv","wxyz"};
string allcomb(int s)
{   if(s==0){
    
}
    while(s!=0){
        s=s/10;
        for(int i=0;i<s;i++){
            s+=keypad[s].substr(s);
        }
        
        
}
int main(){
    string s;
    cin>>s;
    cout<<allcomb(s);

    return 0;
}