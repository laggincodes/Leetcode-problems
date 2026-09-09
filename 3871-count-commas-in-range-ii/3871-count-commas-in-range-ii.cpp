class Solution {
public:
    long long countCommas(long long n) {
        long long s = 1000;
        long long c = 1;
        long long ans = 0;

        while(s <= n) {
            long long e = s * 1000 - 1;

            if(e > n)
                e = n;

            long long x = e - s + 1;

            ans += x * c;

            s *= 1000;
            c++;
        }

        return ans;
    }
};