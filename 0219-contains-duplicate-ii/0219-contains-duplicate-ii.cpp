class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set<int> a; // Had to learn it due to multiple tle errors 

        for(int i = 0; i < nums.size(); i++) {

            if(a.find(nums[i]) != a.end()) {
                return true;
            }

            a.insert(nums[i]);

            if(a.size() > k) {
                a.erase(nums[i - k]);
            }
        }

        return false;
    }
};