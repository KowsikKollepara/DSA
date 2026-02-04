#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calculate(string s) {
        long long num = 0;
        long long last = 0;
        long long result = 0;
        char op = '+';
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            if ((!isdigit(ch) && ch != ' ') || i == s.size() - 1) {
                if (op == '+') {
                    result += last;
                    last = num;
                }
                else if (op == '-') {
                    result += last;
                    last = -num;
                }
                else if (op == '*') {
                    last = last * num;
                }
                else if (op == '/') {
                    last = last / num;
                }
                op = ch;
                num = 0;
            }
        }
        result += last;
        return (int)result;
    }
};
int main(){
    
    return 0;
}