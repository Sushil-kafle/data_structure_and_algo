class Solution
{
public:
    int mySqrt(int x)
    {
        int low = 0;
        int high = x;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            int64_t m = (int64_t)mid;
            int64_t y = (int64_t)x;

            if (m * m == y)
                return mid;
            else if (m * m > y)
                high = mid - 1;
            else if (m * m < y)
                low = mid + 1;
        }

        return high;
    }
};