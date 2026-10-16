class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;

        for(int i = 0; i < fruits.size(); i++) {
            int j = 0;

            while(j < baskets.size()) {
                if(baskets[j] >= fruits[i]) {
                    baskets[j] = -1;
                    break;
                }
                j++;
            }

            if(j == baskets.size()) {
                ans++;
            }
        }

        return ans;
    }
};