class Solution {
public:
    int addDigits(int num) {
        int ans = 0;

        while (num > 0) {
            int rem = num % 10;
            num = num / 10;
            ans += rem;
        }

        while (ans > 9) {
            int rem = ans % 10;
            ans = ans / 10;
            ans += rem;
        }

        return ans;
    }
};