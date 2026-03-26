#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        val = val;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode* node=p.first;
            int x=p.second.first;
            int y=p.second.second;
            nodes[x][y].insert(node->val);
            if(node->left){
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                q.push({node->right,{x+1,y+1}});
            }
        }
        for(auto p:nodes){
            vector<int>col;
            for(auto it:p.second){
                col.insert(col.end(),it.second.begin(),it.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};

int main() {

    
    return 0;
}