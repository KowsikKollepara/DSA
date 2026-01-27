//Problem : Trapping of Rain Water
//Pattern : Two Pointers
//Approach : - Use two pointers,One from left and other fron right.
//           - Maintain Leftmax and Rightmax.
//           - Always move pointer with smaller height.
//           - when moved Add (Currrent max-height[i]) to total
//Time Complexity : O(n)
//Space Complexity : O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int lmax = 0, rmax = 0, total = 0;
        while (l < r) {
            if (height[l] <= height[r]) {
                lmax = max(lmax, height[l]);
                total += lmax - height[l];
                l++;
            } else {
                rmax = max(rmax, height[r]);
                total += rmax - height[r];
                r--;
            }
        }
        return total;
    }
};
