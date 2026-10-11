class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid = nums [ nums. size() /2] ;
        int c = 0 ;

        for(int i = 0 ; i<nums.size() ; i++) {
            if (nums[i] == mid){
                c++;
            }
        }
        if (c== 1){
            return true;
        }
        else {
            return false;
        }
        
    }
};