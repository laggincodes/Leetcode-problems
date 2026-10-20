class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int a = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) {
                a++;
            }
        }

        if(a == 0 || a == n) {
            return 0;
        }

        int b = 0;

        for(int i = 0; i < a; i++) {
            if(nums[i] == 0) {
                b++;
            }
        }

        int ans = b;

        for(int i = 1; i < n; i++) {
            if(nums[i - 1] == 0) {
                b--;
            }

            if(nums[(i + a - 1) % n] == 0) {
                b++;
            }

            ans = min(ans, b);
        }

        return ans;
    }
};