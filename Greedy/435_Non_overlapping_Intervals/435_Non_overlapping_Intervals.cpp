#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
            if(a[1]==b[1]){
                return a[0]<b[0];
            }
            return a[1]<b[1];
        });
        int n=intervals.size();
        int prevend=intervals[0][1];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=prevend){
                cnt++;
                prevend=intervals[i][1];
            }
        }
        return n-cnt;
    }
};
int main(){
    
return 0;
}