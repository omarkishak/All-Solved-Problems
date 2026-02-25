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
    TreeNode* searchBST(TreeNode* root, int val) {
         //Incase it's the first one.
         if (root == nullptr || root->val == val)
              return root;

         // If value is less than root's value → search left
         if (val < root->val)
             return searchBST(root->left, val);

         // Otherwise search right
              return searchBST(root->right, val);
    }
};
