class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                int a = 0;

                for(int k = i; k <= j; k++) {
                    int b = 0;

                    for(int l = i; l < k; l++) {
                        if(nums[l] == nums[k]) {
                            b = 1;
                            break;
                        }
                    }

                    if(b == 0) {
                        a++;
                    }
                }

                ans = ans + a * a;
            }
        }

        return ans;
    }
};