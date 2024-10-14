class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def isSymmetric(self, root):
        def check(p,q):
            if p==None or q==None:
                return p==q
            return p.val==q.val and check(p.left,q.left) and check(p.right,q.right)
        return check(root.left,root.right)

head = TreeNode(1)
head.left = TreeNode(2)
head.right = TreeNode(2)
head.left.left = TreeNode(3)
head.right.left = TreeNode(2)