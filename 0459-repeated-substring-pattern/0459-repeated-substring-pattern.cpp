class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for(int i = 1; i <= n / 2; i++) {
            if(n % i == 0) {
                int a = 0;
                int j;

                for(j = i; j < n; j++) {
                    if(s[j] != s[a]) break;
                    a++;
                    if(a == i) a = 0;
                }

                if(j == n) return true;
            }
        }

        return false;
    }
};