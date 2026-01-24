// Conversion: Postfix to prefix
// Data Structure Used: Stack
// Time Complexity: O(n)+O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

bool check_Operand(char c){
    if((c>='A'&&c<='Z') || (c>='a'&&c<='z') || (c>='0'&&c<='9')){
        return true;
    }
    return false;
}

string postfix_to_prefix(string s){
    stack<string> st;
    for(int i = 0; i < s.size(); i++){
        if(check_Operand(s[i])){
            st.push(string(1, s[i]));
        }
        else{
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string res =s[i] + b + a ;
            st.push(res);
        }
    }
    return st.top();
}
int main(){

    string s = "AB-DE+F*/";
    cout << postfix_to_prefix(s)<<endl; //Output should be -> /-AB*+DEF

    return 0;
}
