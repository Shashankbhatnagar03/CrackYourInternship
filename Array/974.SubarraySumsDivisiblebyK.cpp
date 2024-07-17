class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size(), prefSum = 0, ans = 0;
        unordered_map<int, int> prvOccCt;
        prvOccCt[0] = 1;

        for (int i = 0; i < n; i++)
        {
            prefSum = (prefSum + nums[i] % k + k) % k;

            ans += prvOccCt[prefSum];
            prvOccCt[prefSum]++;
        }

        return ans;
    }
};