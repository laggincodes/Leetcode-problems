class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size() -1 ;
        sort(nums.begin() , nums.end());
        int ans ;
        ans = gcd(nums[0] , nums[n]);

        return ans;
    }
};