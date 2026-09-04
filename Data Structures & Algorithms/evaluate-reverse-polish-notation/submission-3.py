class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        s = []
        operations = "+-*/"
        for i in tokens:
            if i in operations:
                a = s.pop()
                b = s.pop()
                if i == '+':
                    s.append(a+b)
                elif i == '-':
                    s.append(b-a)
                elif i == '*':
                    s.append(a*b)
                else:
                    s.append(int(b/a))
            else:
                s.append(int(i))
        return s[0]
                
