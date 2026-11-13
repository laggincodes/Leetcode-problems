class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 1;
        int a = 1;
        int b = 1;
        int t;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                a++;
                b = 1;
            } else if (nums[i] < nums[i - 1]) {
                b++;
                a = 1;
            } else {
                a = 1;
                b = 1;
            }
            t=max(a,b);
            maxLen = max(maxLen, t);
        }
        return maxLen;
    }
};