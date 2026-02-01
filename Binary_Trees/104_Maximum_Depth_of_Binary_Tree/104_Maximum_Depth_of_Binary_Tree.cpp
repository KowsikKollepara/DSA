//Using Recursive Approach
//            |
//            |
//            |
//            V
class Solution {
public:
    int maxDepth(TreeNode* root) {

        if (root == NULL)
            return 0;

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        return 1 + max(lh, rh);
    }
};

// Using Level order Traversal
//            |
//            |
//            |
//            V
/*class Solution {
public:
    int maxDepth(TreeNode* root) {
        int ans=0;
        if(root==NULL){
            return ans;
        }
        queue <TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* branch=q.front();
                q.pop();
                if(branch->left){
                    q.push(branch->left);
                }
                if(branch->right){
                    q.push(branch->right);
                }
            }
            ans++;
        }
        return ans;
    }
};*/
