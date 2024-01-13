class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        countS, countT = {}, {}
        for char in s:
            countS[char] = countS.get(char, 0) + 1
        
        for char in t:
            countT[char] = countT.get(char, 0) + 1
        print (id(countS))
        print (id(countT))
        return countS == countT

if __name__ == "__main__":
    solution = Solution()
    result = solution.isAnagram("listen", "silent")
    print(result)  # This should print True
    
