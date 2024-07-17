class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // code
        sort(a.begin(), a.end());
        int i = 0, j = m - 1;
        long long mini = INT_MAX;
        while (j < n)
        {
            mini = min(mini, a[j] - a[i]);
            i++;
            j++;
        }
        return mini;
    }
};