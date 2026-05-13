class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracket_pairs = {')': '(', '}': '{', ']': '['}
    
        for char in s:
            if char not in bracket_pairs:
                stack.append(char)
            else:
                if not stack or stack[-1] != bracket_pairs[char]:
                    return False
                stack.pop()
        
        return len(stack) == 0