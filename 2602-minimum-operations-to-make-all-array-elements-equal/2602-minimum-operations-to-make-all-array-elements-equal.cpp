class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<long long> a(n + 1, 0);
        for(int i = 0; i < n; i++) {
            a[i + 1] = a[i] + nums[i];
        }

        vector<long long> ans;

        for(int i = 0; i < queries.size(); i++) {

            int x = queries[i];

            

            int j = lower_bound(nums.begin(), nums.end(), x) - nums.begin();

            long long left = (long long)x * j - a[j];

            long long right = (a[n] - a[j]) - (long long)x * (n - j);

            ans.push_back(left + right);
        }

        return ans;
    }
};