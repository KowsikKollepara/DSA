// Problem: Next Greater Element I
// Pattern: Monotonic Stack
// Time Complexity: O(n + m)
//   n = size of nums2
//   m = size of nums1
// Space Complexity: O(n)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge;
        stack <int>st;
        unordered_map <int,int> mpp;
        for(int i=nums2.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(nums2[i]);
                mpp[nums2[i]]=-1;
            }
            else {
                while(!st.empty() && st.top() <= nums2[i]) {
                    st.pop();
                }
                if(st.empty()){
                    mpp[nums2[i]]=-1;
                    st.push(nums2[i]);
                }
                else{
                    mpp[nums2[i]]=st.top();
                    st.push(nums2[i]);
                }
            }
        }
        for(int i=0;i<nums1.size();i++){
            nge.push_back(mpp[nums1[i]]);
        }
        return nge;
    }
};
