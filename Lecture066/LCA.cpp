
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


        if (root->val == p->val or root->val == q->val) {
            //I don't need to move further down
            //and this can be my potential answer.
            return root;
        }


        //if the above statement is not true
        //you look for p and q.

        TreeNode* l = lowestCommonAncestor(root->left, p, q);
        TreeNode* r = lowestCommonAncestor(root->right, p, q);

        if (l != nullptr and r != nullptr) {
            return root;
        }

        if (l != nullptr and r == nullptr) {
            return l;
        } else {
            //l==nullptr and r!=nullptr
            return r;
        }
    }
};















