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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // if the tree is empty, then create and return a new node
        if (root == nullptr) {
            return new TreeNode(val);
        }

        TreeNode* retRoot = root;

        while (root) {
            //if either child is missing, insert recursively at that side
            if (root->left == nullptr || root->right == nullptr) {
                if (root->val < val) {
                    root->right = insertIntoBST(root->right, val);
                } else {
                    root->left = insertIntoBST(root->left, val);
                }
                return retRoot;
            }

            if (root->val < val) {
                root = root->right;
            } else if (root->val > val) {
                root = root->left;
            }
        }

        //once done, return the root we saved to be checked 
        return retRoot;  
        
    }
};
