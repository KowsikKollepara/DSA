// Conversion: Postfix to Infix
// Data Structure Used: Stack
// Time Complexity: O(n) (more precisely O(2n))
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

bool check_Operand(char c){
    if((c>='A'&&c<='Z') || (c>='a'&&c<='z') || (c>='0'&&c<='9')){
        return true;
    }
    return false;
}

int check_Priority(char c){
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='-' || c=='+') return 1;
    else return -1;
}

string infix_to_postfix(string s){
    int n=s.length();
    string ans;
    stack <char> st;
    for(int i=0;i<n;i++){
        if(check_Operand(s[i])){
            ans+=s[i];
    }
    else if(s[i]=='('){
        st.push(s[i]);
    }
    else if(s[i]==')'){
        while(!st.empty() && st.top()!='('){
            ans+=st.top();
            st.pop();
        }
        st.pop();            // THIS IS TO REMOVE '(' INSIDE THE STACK
    }
    else{
        while(!st.empty() && check_Priority(s[i])<=check_Priority(st.top())){
            ans+=st.top();
            st.pop();
        }
    st.push(s[i]);
    }
}
while(!st.empty()){
    ans+=st.top();
    st.pop();
}
return ans;
}
int main(){
  
    string s= "A+B*(C^D-E)";
    cout << infix_to_postfix(s)<<endl; //Output should be -> ABCD^E-*+

    return 0;
}
