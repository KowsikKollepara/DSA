#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0;
        int vec[3]={-1,-1,-1};
        int n=s.length();
        for(int i=0;i<n;i++){
            vec[s[i]-'a']=i;
                cnt += 1 + min(vec[0], min(vec[1], vec[2]));
                
        }
        return cnt;
    }
};
int main(){
    
return 0;
}