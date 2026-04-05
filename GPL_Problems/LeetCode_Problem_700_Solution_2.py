# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def searchBST(self, root: TreeNode, val: int) -> TreeNode:
        #looping as long as root isn't null
        while root:
            #If it = value, return it.
            if root.val == val:
                return root
            root = root.left if val < root.val else root.right
        return None
