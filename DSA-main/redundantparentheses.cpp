#include<bits/stdc++.h>
using namespace std;
bool resundant_parentheses(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '/'){
            st.push(s[i]);
        }
        else if( s[i] == ')' ){
            if(st.top()=='('){
                return false; 
            }
            while( st.top() == '+' || st.top() == '-' || st.top() == '/'){
                st.pop();
            }
            st.pop();
        }
        
    }
    if(st.empty()){
            return true;
        }
}
int main(){
    string s = "((ab)+ b)";
    cout<<resundant_parentheses(s);
    return 0;
}