// Conversion: Prefix to Infix
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

string prefix_to_infix(string s){
    stack<string> st;
    int n=s.length();
    for(int i=n-1;i>=0;i--){
        if(check_Operand(s[i])){
            st.push(string(1,s[i]));
        }
        else{
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string res = "(" + a + s[i] + b+ ")";   //As we are iterating backwards top should be first and 2nd top should be second
            st.push(res);
        }
    }
    return st.top();
}

int main(){
    string s="*+PQ-MN";
    cout<<prefix_to_infix(s)<<endl; //Output should be -> ((P+Q)*(M-N))
    return 0;
}
