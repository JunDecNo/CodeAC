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
    int minDepth(TreeNode* root) {
        // 为左右子树中高度低的+1
        if(root==NULL)return 0;
        else return get(root);
    }
    int get(TreeNode* root) {
        // 为左右子树中高度低的+1
        if(root==NULL)return 9999;
        if(root->left==NULL&&root->right==NULL)return 1;
        else return min(get(root->left),get(root->right))+1;
    }
};
int main(){
    return 0;
}