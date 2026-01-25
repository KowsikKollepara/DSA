// Problem: Next Greater Element I
// Approach: Assume same array present after this one,and traverse from right to left,
//           do same procedure that is done in next greater element 1,and when i<n add elements to result array
// Time Complexity: O(n) (more clearly O(4n))
//   n = size of nums
// Space Complexity: O(n) (more clearly O(2n))
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, -1);
        stack<int> st;
        for (int i = 2*n - 1; i >= 0; i--) {
            int idx = i % n;
            while (!st.empty() && st.top() <= nums[idx]) {
                st.pop();
            }
            if (i < n) {
                if (!st.empty()) nge[idx] = st.top();
            }
            st.push(nums[idx]);
        }
        return nge;
    }
};
