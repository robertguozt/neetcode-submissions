class Solution:
    def climbStairs(self, n: int) -> int:
        a = {}
        def dfs(num):
            if num in a:
                return a[num]
            if num <= 1:
                return 1
            a[num] = dfs(num - 1) + dfs(num - 2)
            return a[num]
        return dfs(n)