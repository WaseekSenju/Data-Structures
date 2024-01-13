from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        prevMap = {}  # val -> index

        for i, n in enumerate(nums):
            diff = target - n
            if diff in prevMap:
                return [prevMap[diff], i]
            prevMap[n] = i


if __name__ == "__main__":
    solution = Solution()
    result = solution.twoSum([2,7,11,15], 9)
    print(result)  # This should print True
    