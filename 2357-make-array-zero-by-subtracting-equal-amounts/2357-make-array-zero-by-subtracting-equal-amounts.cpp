class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                int a = 0;

                for(int j = 0; j < i; j++) {
                    if(nums[j] == nums[i]) {
                        a = 1;
                        break;
                    }
                }

                if(a == 0) {
                    ans++;
                }
            }
        }

        return ans;
    }
};