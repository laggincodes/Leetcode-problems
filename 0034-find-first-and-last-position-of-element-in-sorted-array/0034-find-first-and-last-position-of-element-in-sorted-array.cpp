class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = -1, b = -1;
        int st = 0 ;
        int e = nums.size() - 1;

        while(st <= e) {
            int mid = st + (e - st) / 2;

            if(nums[mid] == target) {
                a = mid;
                e = mid - 1;
            }
            else if(nums[mid] < target) {
                st = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        st = 0;
        e = nums.size() - 1;

        while(st <= e) {
            int mid = st + (e - st) / 2;

            if(nums[mid] == target) {
                b = mid;
                st = mid + 1;
            }
            else if(nums[mid] < target) {
                st = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return {a, b};
    }
};