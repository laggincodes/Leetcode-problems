class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1) {
            return "";
        }

        int a = 0;

        for(int i = 1; i <= str1.size() && i <= str2.size(); i++) {
            if(str1.size() % i == 0 && str2.size() % i == 0) {
                a = i;
            }
        }

        string ans = "";

        for(int i = 0; i < a; i++) {
            ans = ans + str1[i];
        }

        return ans;
    }
};