class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;

        for(int i = 0; i < words.size(); i++) {
            string s = chars;
            int j;

            for(j = 0; j < words[i].size(); j++) {
                int k;

                for(k = 0; k < s.size(); k++) {
                    if(words[i][j] == s[k]) {
                        s[k] = ' ';
                        break;
                    }
                }

                if(k == s.size()) {
                    break;
                }
            }

            if(j == words[i].size()) {
                ans = ans + words[i].size();
            }
        }

        return ans;
    }
};