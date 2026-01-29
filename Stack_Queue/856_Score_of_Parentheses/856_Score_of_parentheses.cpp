//Approach : - First push '0' into the stack to ensure that stack is not empty after last poping.
//           - Next run a loop and push '0' into stack if top is '('.
//           - if ')' and if top is 0 then it is to be add 1,as it s just outside the simple parentheses->(),else add 2 times the value to top.
//Time Complexity :O(n)
//Space  Complexity : O(n)
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int n=s.length();
        st.push(0);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                int add=(st.top()==0)?1:2*st.top();
                st.pop();
                st.top()+=add;
            }
        }
        return st.top();
    }
};
