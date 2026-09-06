#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long find_countWithDigitSum(int index, int s, bool tight, vector<int> &nums, vector<vector<vector<int>>> &dp)
    {
        // base case
        if (s == 0)
            return 1;
        if (s < 0 || index == nums.size())
            return 0;
        if (dp[index][s][tight] != -1)
            return dp[index][s][tight];
        int res = 0;
        if (tight)
        {
            for (int i = 0; i < nums[index]; i++)
            {
                res += find_countWithDigitSum(index + 1, s - i, 0, nums, dp);
            }
            res += find_countWithDigitSum(index + 1, s - nums[index], 1, nums, dp);
        }
        else
        {
            for (int i = 0; i <= 9; i++)
            {
                res += find_countWithDigitSum(index + 1, s - i, 0, nums, dp);
            }
        }
        return dp[index][s][tight] = res;
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
        vector<vector<vector<int>>> dp(nums.size() + 1, vector<vector<int>>(s + 1, vector<int>(2, -1)));
        return find_countWithDigitSum(0, s, 1, nums, dp);
    }
};
int main()
{

    int x, sum;
    cout << "Enter the number and sum:";
    cin >> x >> sum;

    Solution s;
    cout << "The numbers of nos where the sum of digits will be same as " << sum << " is  " << s.countWithDigitSum(x, sum) << endl;
    return 0;
}
