class Solution:
    def flatten(self, root: TreeNode) -> None:
        def dfs(r): return [r] + dfs(r.left) + dfs(r.right) if r else []
        L = dfs(root)
        for i in range(len(L)-1): L[i].left, L[i].right = None, L[i+1]
