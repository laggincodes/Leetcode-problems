class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > num * 9) {
            return "";
        }

        string ans = "";

        for (int i = 0; i < num; i++) {
            if (sum >= 9) {
                ans += '9';
                sum -= 9;
            }
            else {
                ans += char(sum + '0');
                sum = 0;
            }
        }

        return ans;
    }
};
