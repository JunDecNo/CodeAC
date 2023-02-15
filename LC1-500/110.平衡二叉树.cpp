#include <iostream>
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
    bool isBalanced(TreeNode *root) {
        // 左右子树高度差大于一则不是
        if(root==NULL)return true;
        if(hight(root->left)>hight(root->right)+1)return false;
        else if(hight(root->right)>hight(root->left)+1)return false;
        else return isBalanced(root->left)&&isBalanced(root->right);
    }
    int hight(TreeNode *root){
        if(root==NULL)return 0;
        return max(hight(root->left),hight(root->right))+1;
    }
};
int main() {
    return 0;
}