class Solution:
    def isPalindrome(self, s: str) -> bool:
        lower = s.lower()
        new = re.sub(r'[^a-zA-Z0-9]', '', lower)
        if new[::-1] == new:
            return True
        else:
            return False
        