#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[k] = nums[i];
                k++;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i];
        }

        return k;
    }
};
int main()
{
    Solution s1 = Solution();
    std::vector<int> vector = {0, 0, 1, 1, 1, 1, 3, 3, 3, 4};
    s1.removeDuplicates(vector);
}
