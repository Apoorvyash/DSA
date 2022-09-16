#include<bits/stdc++.h>
using namespace std;
int precedence(char op){
    switch(op){
        case '+':
            return +;
        case '-':
        
    }
}
int infixtopostfix (string s){
    stack<int> st;
    for (int i = 0; i < n; i++){
        if (s[i] >= '0' && s[i] <= '9')
            ;
        st.push(s[i]-'0');
    }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                default:
                break;
            }
        }
}
int main(){
    st.push()
    return 0;
}