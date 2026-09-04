class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        sd = {}
        td = {}
        for i in range(len(s)):
            if s[i] not in t:
                return False
            if t[i] not in s:
                return False
            if t[i] not in td:
                td[t[i]] = 1
            else:
                td[t[i]] += 1
            if s[i] not in sd:
                sd[s[i]] = 1
            else:
                sd[s[i]] += 1
        return sd == td
            

