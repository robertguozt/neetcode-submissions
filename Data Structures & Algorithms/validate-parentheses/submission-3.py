class Solution:
    def isValid(self, s: str) -> bool:
        a = []
        opening = '([{'
        closing = ')]}'
        for i in s:
            if i in opening:
                a.append(i)
            else:
                if len(a) == 0:
                    return False
                elif opening.index(a[-1]) != closing.index(i):
                    return False
                else:
                    a.pop()
        return len(a) == 0