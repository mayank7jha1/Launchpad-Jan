
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() {
        left = nullptr;
        right = nullptr;
    }

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) {
            return nullptr;
        }

        if ((root->val > p->val) and (root->val > q->val)) {
            //LCA is in left half
            return lowestCommonAncestor(root->left, p, q);
        }


        if ((root->val < p->val) and (root->val < q->val)) {
            //LCA is in right half
            return lowestCommonAncestor(root->right, p, q);
        }

        //Any other Scenario:
        return root;

    }
};















