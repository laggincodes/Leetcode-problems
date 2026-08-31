class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() <3){
            return -1;

        }
        long long max1 = LLONG_MIN;
        long long min1 = LLONG_MAX;

        for (int i = 0 ; i < nums.size() ; i++){
            if (nums[i] > max1){
                max1 = nums[i];
            }
        }
        for (int i = 0 ; i < nums.size() ; i++){
            if (nums[i] < min1){
                min1 = nums[i];
            }
        }
        for (int i = 0 ; i < nums.size() ; i++){
            if (nums[i] != max1 && nums[i] != min1  ){
                return nums[i];
            }
        }
        return -1;
        


        
    }
};