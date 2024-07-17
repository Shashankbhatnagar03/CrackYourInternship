class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0;
        int r = height.size() - 1;
        int max = 0;
        while (l < r)
        {
            int lh = height[l];
            int rh = height[r];
            int min_h = min(lh, rh);
            int len = r - l;
            int curr_area = min_h * len;
            max = max(max, curr_area);
            if (lh < rh)
                l++;
            else
                r--;
        }
        return max;
    }
};