class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        for (int i = 0; i < haystack.size() - needle.size(); i++)
        {
            if (haystack.substr(i, i + needle.size()) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};