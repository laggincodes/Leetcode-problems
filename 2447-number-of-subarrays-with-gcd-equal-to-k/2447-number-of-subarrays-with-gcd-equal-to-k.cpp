class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int a = nums[i];

            for(int j = i; j < n; j++) {
                a = gcd(a, nums[j]);

                if(a == k) {
                    ans++;
                }
            }
        }

        return ans;
    }
};