class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while(i >= 0) {
            if(s[i] == ' ') {
                i--;
            }
            else {
                string a = "";

                while(i >= 0 && s[i] != ' ') {
                    a = s[i] + a;
                    i--;
                }

                if(ans != "") {
                    ans = ans + " ";
                }
                ans = ans + a;
            }
        }
        return ans;
    }
};