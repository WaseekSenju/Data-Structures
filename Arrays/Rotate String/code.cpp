#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    bool rotateString(string s, string goal)
    {

        return (s.length() == goal.length() && (s + s).find(goal));
    }
};
int main()
{
    Solution s1 = Solution();
    string s = "abcde";
    string g = "cdeab";
    cout << s1.rotateString(s, g);
}
