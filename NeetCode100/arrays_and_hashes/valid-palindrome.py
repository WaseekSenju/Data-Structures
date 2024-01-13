class Solution:
    def isPalindrome(self, s: str) -> bool:
        l, r = 0, len(s) - 1
        while l < r:
            if not s[l].isalnum():
                l += 1
                continue
            if not s[r].isalnum():
                r -= 1
                continue
            if s[l].lower() != s[r].lower():
                return False
            l += 1
            r -= 1
        return True
    
# not two pointers approach 
    
# class Solution:
#     def isPalindrome(self, s: str) -> bool:
#         new = ''
#         for a in s:
#             if a.isalpha() or a.isdigit():
#                 new += a.lower()
#         return (new == new[::-1])


if __name__ == "__main__":
    solution = Solution()
    result = solution.isPalindrome("A man, a plan, a canal: Panama")
    print(result)  # This should print True
    