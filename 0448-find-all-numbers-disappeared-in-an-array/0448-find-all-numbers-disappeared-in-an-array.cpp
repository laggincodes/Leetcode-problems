class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> ans;
        
        sort(nums.begin(), nums.end());
        
        int a = 1;
        
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] == a){
                a++;
            }
            else if(nums[i] > a){
                ans.push_back(a);
                a++;
                i--;
            }
        }
        
        while(a <= nums.size()){
            ans.push_back(a);
            a++;
        }
        
        return ans;
    }
};