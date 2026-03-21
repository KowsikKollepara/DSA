#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool is_leaf(node* root){
    return (root->left == NULL && root->right == NULL);
}

void left_boundary(node* root, vector<int> &res){
    node* curr = root->left;
    while(curr){
        if(!is_leaf(curr)){
            res.push_back(curr->data);
        }
        if(curr->left){
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
    }
}

void AddLeaves(node* root, vector<int> &res){
    if(is_leaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) AddLeaves(root->left, res);
    if(root->right) AddLeaves(root->right, res);
}

void right_boundary(node* root, vector<int> &res){
    vector<int> temp;
    node* curr = root->right;

    while(curr){
        if(!is_leaf(curr)){
            temp.push_back(curr->data);
        }
        if(curr->right){
            curr = curr->right;
        }
        else{
            curr = curr->left;
        }
    }
    reverse(temp.begin(), temp.end());
    for(auto x : temp){
        res.push_back(x);
    }
}

vector<int> boundary(node* root){
    vector<int> result;

    if(!root) return result;

    if(!is_leaf(root)){
        result.push_back(root->data);
    }

    left_boundary(root, result);
    AddLeaves(root, result);
    right_boundary(root, result);

    return result;
}

int main() {

    
    return 0;
}