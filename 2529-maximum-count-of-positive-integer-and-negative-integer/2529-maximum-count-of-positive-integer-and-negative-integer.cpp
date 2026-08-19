class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        int s = 0, e = n - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;

            if (nums[m] > 0)
                e = m - 1;
            else
                s = m + 1;
        }

        int c = n - s;

        s = 0;
        e = n - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;

            if (nums[m] < 0)
                s = m + 1;
            else
                e = m - 1;
        }

        int d = e + 1;

        return max(c, d);
    }
};
