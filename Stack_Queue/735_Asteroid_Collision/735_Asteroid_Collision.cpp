// Problem: Asteroid Collision
// Approach:
//   - Use vector as stack
//   - Collision happens only when stack top > 0 and current < 0,Smaller asteroid explodes
//   - If equal size, both will explode
// Time Complexity: O(n)  (More precisely O(2n))
// Space Complexity: O(n)

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector <int> ans;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(asteroids[i]>0){
                ans.push_back(asteroids[i]);
            }
           else {
             while(!ans.empty() && ans.back()>0 && ans.back()<abs(asteroids[i])){
                ans.pop_back();
            }
            if(!ans.empty() && ans.back()==abs(asteroids[i])){
                ans.pop_back();
            }
            else if(ans.empty() || ans.back()<0){
                ans.push_back(asteroids[i]);
            }}
        }
        return ans;
    }
};
