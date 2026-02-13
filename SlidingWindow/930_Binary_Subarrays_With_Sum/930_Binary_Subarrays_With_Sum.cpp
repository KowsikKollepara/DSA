#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt=fun(nums,goal);
        int cnt2=fun(nums,goal-1);
    return cnt-cnt2;
    }
    private:
    int fun(vector<int>& nums, int goal){
        int l=0,r=0,q=0,cnt=0,cnt2=0;
        int sum=0;
        int sum2=0;
        int n=nums.size();
        if(goal<0){
            return 0;
        }
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum=sum-nums[l];
                l++;
            }
            if(sum<=goal){
                cnt=cnt+(r-l+1);
            }
            r++;
        }
        return cnt;
}
};
int main(){
    
return 0;
}