//Approach : - Create two stacks,store indexes of '(' in one and indexes of '*' in one
//           - while traverse if found ')' pop a open bracket/if open stack is empty check from star stack.
//           - after traversal of string if any '(' remaining, see if any stars are there before that bracket else return false.
//Time omplexity : O(2n).
//Space Complexity :O(n)
class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        stack <int> open;
        stack<int>star;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else{
                if(!open.empty()){
                    open.pop();
                }
                else{
                    if(star.empty()){
                        return false;
                    }
                    else{
                        star.pop();
                    }
                }
            }
        }
            while(!open.empty()){
                if(star.empty()){
                    return false;
                }
                if(open.top()>star.top()){
                    return false;
                }
                open.pop();
                star.pop();
            }
        return true;
    }
};
