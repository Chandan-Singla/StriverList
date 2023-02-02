#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void level(TreeNode<int>*root,vector<int>&ans){
    if(root==NULL)return ;
    if(!root->left&&!root->right){
        ans.push_back(root->data);
        return ;
    }     
    level(root->left,ans);
    level(root->right,ans);
    return ;
}
void right(TreeNode<int>*root,vector<int>&ans){
    if(root==NULL||(!root->left&&!root->right))return;
    if(root->right)right(root->right,ans);
    else if(root->left)right(root->lef,ans);
    ans.push_back(root->data);
    // return;
}
 void left(TreeNode<int>*root,vector<int>&ans){
     if(root==NULL||(!root->left&&!root->right))return;
     ans.push_back(root->data);
     if(root->left)left(root->left,ans);
     else if(root->right)left(root->right,ans);
    //  ans.pop_back();
     return;
 }
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int>ans;
   if(root==NULL)return ans;
    // vector<int>l;
    ans.push_back(root->data);
    left(root->left,ans);
    // ans.pop_back();
    // vector<int>r;
    // right(root->right,r);
    // vector<int>b;
level(root->left,ans);
level(root->right,ans);
right(root->right,ans);
return ans;
}
