class Solution {
public:
  bool isSameTree(TreeNode *p, TreeNode *q) {
    return (p == null) == (q == null) &&
      (p == null || (p->val == q->val && isSameTree(p->left, q->left) && 
		     isSameTree(p->right, q->right)));
  }
};
