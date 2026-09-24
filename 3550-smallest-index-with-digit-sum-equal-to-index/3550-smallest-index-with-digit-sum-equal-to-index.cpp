class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int rem;

        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int sum = 0;

            while (temp != 0) {
                rem = temp % 10;
                temp = temp / 10;
                sum = sum + rem;
            }

            if (sum == i) {
                return i;
            }
        }

        return -1;
    }
};