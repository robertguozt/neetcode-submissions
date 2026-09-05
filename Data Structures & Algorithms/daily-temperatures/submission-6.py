class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        out = [0] * len(temperatures)
        
        for i in range(len(temperatures)):
            if len(stack) == 0:
                stack.append((i, temperatures[i]))
            else:
                b = stack[-1]
                while temperatures[i] > b[1]:
                    if len(stack) != 0:
                        a = stack.pop()
                        out[a[0]] = i - a[0]
                        if len(stack) > 0:
                            b = stack[-1]
                    else:
                        break
                stack.append((i, temperatures[i]))
        
        return out

            





        
        