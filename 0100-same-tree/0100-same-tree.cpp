class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both nodes are null, they are the same
        if (!p && !q) return true;

        // If one is null and the other isn't, they're different
        if (!p || !q) return false;

        // Check current node values and recurse on left and right subtrees
        return (p->val == q->val) &&
               isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};