#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool left_right=true;
        while(!q.empty()){
            int n=q.size();
            vector <int> row(n);
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                int index=(left_right)?i:(n-i-1);
                row[index]=node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            left_right=!left_right;
            result.push_back(row);
        }
        return result;
    }
};

int main(){
    
return 0;
}



