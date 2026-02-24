/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        return DFS(root, 0);
    }

    int DFS(TreeNode* node, int x){
        if(node == nullptr) return 0;
        x = x * 2 + node->val;
        if(node->left == nullptr && node->right == nullptr) return x;

        return DFS(node->left, x) + DFS(node->right, x);
    }
};
