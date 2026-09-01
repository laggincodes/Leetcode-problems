class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int a = 1;

        while(a == 1){
            a = 0;

            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == original){
                    original *= 2;
                    a = 1;
                    break;
                }
            }
        }

        return original;
    }
};