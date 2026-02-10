#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;          //SHOULD NOT ASSIGN ZERO HERE.
        traverse(root,maxi);
        return maxi;
    }
private:
    int traverse(TreeNode* root,int& maxi){
        if(root==NULL){
            return 0;
        }
        int left=max(0,traverse(root->left,maxi));     //IMPORTANT AS IT AVOIDS MAXIMUM NEGATIVE SUM 
        int right=max(0,traverse(root->right,maxi));
        maxi=max(maxi,root->val+left+right);
        return root->val+max(left,right);
    }

};
int main(){
    
return 0;
}