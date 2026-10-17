class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = 0;
        int i = 0;
        int a = -1, b = -1;
        int last = 0;

        for(int j = 0; j < fruits.size(); j++) {
            if(fruits[j] != a && fruits[j] != b) {
                a = fruits[last];
                b = fruits[j];
                i = last;
            }

            if(fruits[j] != fruits[j == 0 ? 0 : j - 1]) {
                last = j;
            }

            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};