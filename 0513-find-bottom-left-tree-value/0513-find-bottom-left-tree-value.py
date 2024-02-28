# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def heightOfTree(self, root: Optional[TreeNode]) -> int:
        return max(self.heightOfTree(root.left), self.heightOfTree(root.right))+1 if root else 0
    
    def findBottomLeftValue(self, root: Optional[TreeNode]) -> int:
        
        height = self.heightOfTree(root)
        
        treeque = deque()
        
        treeque.append(root) 
        
        while height>1:
            
            baseLength = len(treeque)
            
            while baseLength:
                currNode = treeque.popleft()
                treeque.append(currNode.left) if currNode.left else None
                treeque.append(currNode.right) if currNode.right else None
                baseLength -= 1
            
            height -=1 
        
        firstNode = treeque.popleft()
        return firstNode.val
                
                
        
        
        
        