#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int l=0,r=0;
       int zeroes=0;
       int maxi=0;
       while(r<nums.size()){
        if(nums[r]==0){
            zeroes++;
        }
       while(zeroes>k){
        if(zeroes>k){
            zeroes--;
        }
        l++;
       }
       maxi=max(maxi,(r-l+1));
       r++;
    }
    return maxi;
    }
};
int main(){
    
return 0;
}