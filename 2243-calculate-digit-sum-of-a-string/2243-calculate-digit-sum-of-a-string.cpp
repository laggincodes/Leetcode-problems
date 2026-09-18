class Solution {
public:
    string digitSum(string s, int k) {

        while (s.size() > k) {
            string temp = "";
            int i = 0;
            while (i < s.size()) {
                int re = k;
                int sum = 0;
                while (i < s.size() && re--) {
                    sum += s[i] - '0';
                    i++;
                }
                string k = to_string(sum);
                temp += k;
            }
            s = temp;
        }
        return s;
    }
};