#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int slow_pointer = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {

                nums[slow_pointer] = nums[i];
                slow_pointer++;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i];
        }

        return slow_pointer;
    }
};
int main()
{
    Solution s1 = Solution();
    std::vector<int> vector = {1, 3, 3, 1};
    s1.removeElement(vector, 3);
}
