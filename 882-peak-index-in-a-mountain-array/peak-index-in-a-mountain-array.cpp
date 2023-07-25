class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        ios_base::sync_with_stdio(0);
        int len = arr.size();
        for (int i = 1; i < len; i++)
            if (arr[i] < arr[i - 1])
                return i - 1;
        return len - 1;
    }
};