#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target || target < nums[i])
                return i;
        }

        return nums.size();
    }
};
int main()
{
    Solution s1 = Solution();
    vector<int> v = {1, 3, 5, 6};
    cout << s1.searchInsert(v, 7);
}
