#include<iostream>
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool isL,isR;
        if(root==NULL)return false;
        targetSum -= root->val;
        if(root->left==NULL&&root->right==NULL){
            if(targetSum==0)return true;
            else return false;
        }
        if(root->left!=NULL)isL =  hasPathSum(root->left,targetSum);
        if(root->right!=NULL)isR =  hasPathSum(root->right,targetSum);
        return isL||isR;
    }
};
int main(){
    return 0;
}