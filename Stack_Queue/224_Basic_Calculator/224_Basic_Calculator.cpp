#include <bits/stdc++.h>
using namespace std;
class Solution {
bool digit(char ch){
    if(ch-'0'>=0 && ch-'0'<=9 ){
        return true;
    }
    return false;
}
public:
    int calculate(string s) {
        long long n=s.size();
        long long result=0;
        long long num=0;
        stack<long long>st;
        int sign=1;
            for (int i = 0; i < n; i++) {
            if (digit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            else if (s[i] == '+') {
                result += sign * num;
                num = 0;
                sign = 1;
            }
            else if (s[i] == '-') {
                result += sign * num;
                num = 0;
                sign = -1;
            }
            else if (s[i] == '(') {
                st.push(result);
                st.push(sign);
                result = 0;
                sign = 1;
            }
            else if (s[i] == ')') {
                result += sign * num;
                num = 0;
                int prevSign = st.top(); st.pop();
                int prevResult = st.top(); st.pop();

                result = prevResult + prevSign * result;
            }
        }
        result += sign * num; 
        return result;
    }
};
int main(){
    
return 0;
}