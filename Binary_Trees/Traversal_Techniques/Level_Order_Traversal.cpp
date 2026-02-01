/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Level order means -> Layer by Layer traversal

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue <TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector <int> level;
            for(int i=0;i<n;i++){
                TreeNode* branch=q.front();
                q.pop();
                if(branch->left){
                    q.push(branch->left);
                }
                if(branch->right){
                    q.push(branch->right);
                }
                level.push_back(branch->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
