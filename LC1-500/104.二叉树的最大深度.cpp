#include <iostream>
#include <queue>
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
    int maxDepth(TreeNode *root) {
        if (root == NULL)
            return 0;
        else
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
    int maxDepth(TreeNode *root) {
        if (root == NULL)
            return 0;
        else {
            queue<TreeNode *> res;
            res.push(root);
            int ans = 0;
            while (!res.empty()) {
                int sz = res.size();
                while (sz > 0) {
                    TreeNode *node = res.front();
                    res.pop();
                    if (node->left)
                        res.push(node->left);
                    if (node->right)
                        res.push(node->right);
                    sz -= 1;
                }
                ans += 1;
            }
            return ans;
        }
    }
    int maxDepth(TreeNode *T) {
        TreeNode *p;
        queue<TreeNode *> qu;
        qu.push(T);
        int width = 0;
        int last = 1;
        int max = 1;
        int level =0 ;
        while (!qu.empty()) {
            p = qu.front();
            qu.pop();
            if (p->left != NULL) {
                qu.push(p->left);
                width++;
            }
            if (p->right != NULL) {
                qu.push(p->right);
                width++;
            }
            if (--last == 0) {
                last = width;
                if (max < width) {
                    max = width;
                }
                width = 0;
                level ++;

            }
        }
        // delete q;
        return level;
    }
};
int main() {
    return 0;
}