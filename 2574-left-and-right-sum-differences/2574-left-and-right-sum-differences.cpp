class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int right=0;

        for(int i=0;i<nums.size();i++){
            right+=nums[i];
        }

        int left=0;
        
        for(int j=0;j<nums.size();j++){
            right -= nums[j];
            ans.push_back(abs(left-right));
            left += nums[j];
        }

        return ans;
    }
};