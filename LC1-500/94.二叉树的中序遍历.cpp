#include <iostream>
#include <vector>
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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int>res;
        MidSear(res,root);
        return res;
    }
    void MidSear(vector<int> &res, TreeNode *root) {
        if (root == NULL)
            return;
        MidSear(res, root->left);
        res.push_back(root->val);
        MidSear(res, root->right);
    }
};
int main() {
    return 0;
}