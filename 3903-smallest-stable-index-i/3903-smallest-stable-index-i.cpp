class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();

        for (int i = 0; i < n; i++) {

            int a = nums[0];
            int b = nums[i];

            for (int j = 0; j <= i; j++) {
                a = max(a, nums[j]);
            }

            for (int j = i; j < n; j++) {
                b = min(b, nums[j]);
            }

            if (a - b <= k) {
                return i;
            }
        }

        return -1;
    }
};