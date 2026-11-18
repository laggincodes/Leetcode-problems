class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum = 0;
        int a = 0;

        for (int i : nums) {
            if (a % 2 == 0) {
                sum += i;
            }
            else {
                sum -= i;
            }
            a++;
        }

        return sum;
    }
};