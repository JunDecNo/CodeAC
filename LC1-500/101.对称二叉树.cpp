#include <iostream>
using namespace std;
/** * Definition for a binary tree node. * struct TreeNode { *     int val; *     TreeNode *left; *     TreeNode *right; *     TreeNode() : val(0), left(nullptr), right(nullptr) {} *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {} * }; */
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
    bool isSymmetric(TreeNode *root) {
        if (root->left==NULL&&root->left==NULL)return true;
        else if (root->left==NULL||root->left==NULL)return false;
        else return isSameTree(root->left, root->right);
    }
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p == NULL && q == NULL)
            return true;
        else if (p != NULL && q != NULL && p->val == q->val) {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        } else
            return false;
    }
};
int main() {
    return 0;
}