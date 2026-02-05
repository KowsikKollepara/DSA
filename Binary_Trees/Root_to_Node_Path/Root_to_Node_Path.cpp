#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution{
public:
bool getPath(TreeNode* root,vector<int>&ans,int k){
    if(!root){
        return false;
    }
    ans.push_back(root->val);
    if(root->val==k){
        return true;
    }
    if(getPath(root->left,ans,k)||getPath(root->right,ans,k)){
        return true;
    }
    ans.pop_back();
    return false;
}
public:
vector <int> solution(TreeNode* root,int k){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    getPath(root,ans,k);
    return ans;
}
};
int main(){
    
return 0;
}