#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long find_countWithDigitSum(int index, int s, int tight, vector<int> &nums)
    {
        // base case
        if (s == 0)
            return 1;
        if (s < 0 || index == nums.size())
            return 0;

        int res = 0;
        if (tight)
        {
            for (int i = 0; i < nums[index]; i++)
            {
                res += find_countWithDigitSum(index + 1, s - i, 0, nums);
            }
            res += find_countWithDigitSum(index + 1, s - nums[index], 1, nums);
        }
        else
        {
            for (int i = 0; i <= 9; i++)
            {
                res += find_countWithDigitSum(index + 1, s - i, 0, nums);
            }
        }
        return res;
    }

    long long countWithDigitSum(long long n, int s)
    {
        vector<int> nums;
        while (n > 0)
        {
            nums.push_back(n % 10);
            n /= 10;
        }
        reverse(nums.begin(), nums.end());
        return find_countWithDigitSum(0, s, 1, nums);
    }
};
int main()
{
    Solution s;
    cout << s.countWithDigitSum(534, 9) << endl;
    return 0;
}

