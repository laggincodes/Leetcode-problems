class Solution {
public:
    string replaceDigits(string s) {

        for(int i = 1; i < s.size(); i = i + 2) {
            int num = s[i] - '0';
            char ch = s[i - 1];
            char ans = ch + num;
            s[i] = ans;
        }

        return s;
    }
};