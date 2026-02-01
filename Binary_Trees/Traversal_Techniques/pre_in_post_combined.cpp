#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
node (int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

vector<vector<int>> all(node* root){
    vector<vector<int>> ans;
    vector<int>pre;
    vector<int>in;
    vector<int>post;
    if(root==NULL){
        return ans;
    }
    stack<pair<node*,int>>st;
    st.push({root,1});

    while(!st.empty()){
        auto it=st.top();
        st.pop();

        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL){
                st.push({it.first->left,1});
            }
        }

        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL){
                st.push({it.first->right,1});
            }
        }

        else{
            post.push_back(it.first->data);
        }

    }
    ans={pre,in,post};
    return ans;
}

int main() {
        /*
            1
           / \
          2   3
         / \
        4   5
    */
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    vector<vector<int>> traversals = all(root);

    cout << "Preorder Traversal  : ";
    for (int x : traversals[0]) cout << x << " ";
    cout<<endl;

    cout << "Inorder Traversal   : ";
    for (int x : traversals[1]) cout << x << " ";
    cout<<endl;

    cout << "Postorder Traversal : ";
    for (int x : traversals[2]) cout << x << " ";

    cout << endl;

    return 0;
}
