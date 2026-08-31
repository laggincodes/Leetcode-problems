class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long a = LLONG_MIN;
        long long b = LLONG_MIN;
        long long c = LLONG_MIN;

        for (int num : nums) {
            if (num == a || num == b || num == c)
                continue;

            if (num > a) {
                c = b;
                b = a;
                a = num;
            }
            else if (num > b) {
                c = b;
                b = num;
            }
            else if (num > c) {
                c = num;
            }
        }

        if (c == LLONG_MIN)
            return a;

        return c;
    }
};