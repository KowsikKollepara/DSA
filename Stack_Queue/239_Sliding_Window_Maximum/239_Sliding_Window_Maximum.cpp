// Problem: Sliding Window Maximum
// Pattern: Monotonic Deque
// Approach:
//   - Maintain a deque storing indices in decreasing order
//   - Remove elements out of the current window
//   - Front of deque always gives maximum of current window
//   - Add result when window size becomes k
// Time Complexity: O(n) (More precisely O(2n))
// Space Complexity: O(k)

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        deque<int>dq;
        for(int i=0;i<n;i++){
            if(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);  //PUSH ONLY AFTER i>=k-1
            }
        }
        return ans;
    }
};
