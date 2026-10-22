class Solution {
public:
    long long coloredCells(int n) {
        long long  ans = 1;
        long long add = 4;

        for (int i = 2; i <= n; i++) {
            ans += add;
            add += 4;
        }

        return ans;
    }
};