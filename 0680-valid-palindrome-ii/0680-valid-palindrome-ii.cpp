class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while(i < j) {
            if(s[i] != s[j]) {
                int a = i, b = j - 1;
                while(a < b && s[a] == s[b]) {
                    a++;
                    b--;
                }
                if(a >= b) return true;

                a = i + 1;
                b = j;
                while(a < b && s[a] == s[b]) {
                    a++;
                    b--;
                }
                if(a >= b) return true;

                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};