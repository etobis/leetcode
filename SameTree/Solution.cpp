class Solution {
public:
  bool isSameTree(TreeNode *p, TreeNode *q) {
    return (p == 0) == (q == 0) &&
      (p == 0 || (p->val == q->val && isSameTree(p->left, q->left) && 
		     isSameTree(p->right, q->right)));
  }
};
