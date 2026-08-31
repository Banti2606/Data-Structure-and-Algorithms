class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        // Base case
        if (root == NULL)
            return NULL;

        // If root is p or q
        if (root == p || root == q)
            return root;

        // Search in left and right
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // One node found on each side
        if (left != NULL && right != NULL)
            return root;

        // Return whichever side has a node
        if (left != NULL)
            return left;

        return right;
    }
};