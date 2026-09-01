class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = 0;
        int a = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max1){
                max1 = nums[i];
                a = i;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(i != a && max1 < nums[i] * 2){
                return -1;
            }
        }

        return a;
    }
};