# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:

#first, we just make sure the root isn't empty
        if not root:
            return TreeNode(val)

#saving the root to return it later once modified
        retRoot = root

#Basically, for every node, we will check if its value is bigger or smaller than the value we wanna inject, until we hit a node with null left and right, then we do the injection
        while root:
            if root.left == None or root.right == None:
                if root.val < val:
                    root.right = self.insertIntoBST(root.right, val)
                else:
                    root.left = self.insertIntoBST(root.left, val)
                return retRoot

            if root.val < val:
                root = root.right
            
            elif root.val > val:
                root = root.left
        return retRoot

                

        
