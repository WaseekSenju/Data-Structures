#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void shiftAllZerosToEnd(vector<int> &nums)
    {
        int length = nums.size();

        for (int i = 0; i < length / 2; i++)
        {
            if (nums[i] == 0)
            {
                int temp = nums[i];
                nums[i] = nums[length - i - 1];
                nums[length - i - 1] = temp;
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
    std::vector<int> vector = {0, 0, 0, 0, 1, 1, 1, 1, 3, 3, 3, 4};
    s1.shiftAllZerosToEnd(vector);
}
