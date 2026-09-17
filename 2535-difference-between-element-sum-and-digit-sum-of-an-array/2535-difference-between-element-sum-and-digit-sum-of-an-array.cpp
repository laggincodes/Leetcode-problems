class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elsum =0 ;
        int disum =0 ;
        for (int i =0 ; i<nums.size(); i++){
            elsum = elsum + nums[i] ;

            while (nums[i]){
                disum += nums[i] % 10 ;
                nums[i] /= 10 ;
            }
        }
        return abs(elsum-disum);
        
    }
};