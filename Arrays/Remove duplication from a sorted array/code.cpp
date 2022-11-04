#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void shiftAllZerosToEnd(vector<int> &nums)
    {
        int length = nums.size();
        int j = 0;
        for (int i = 0; i < length; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[j], nums[i]);
                j++;
            }
        }
        for (int i = 0; i < length; i++)
        {
            cout << nums[i] << ",";
        }
    }
};
int main()
{
    Solution s1 = Solution();
    std::vector<int> vector = {0, 2, 0, 0, 4, 0, 1, 1, 3, 3, 3, 4};
    s1.shiftAllZerosToEnd(vector);
}
