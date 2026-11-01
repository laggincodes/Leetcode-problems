class Solution {
public:
    vector<long long> distance(vector<int>& nums) {

        int n = nums.size();

        vector<vector<int>> a;

        for(int i = 0; i < n; i++) {
            a.push_back({nums[i], i});
        }

        sort(a.begin(), a.end());

        vector<long long> ans(n, 0);

        int i = 0;

        while(i < n) {

            int j = i;
            long long sum = 0;

            while(j < n && a[j][0] == a[i][0]) {
                sum = sum + a[j][1];
                j++;
            }

            long long left = 0;

            for(int k = i; k < j; k++) {

                long long x = a[k][1];

                long long l = x * (k - i) - left;

                long long right = sum - left - x;

                long long r = right - x * (j - k - 1);

                ans[x] = l + r;

                left = left + x;
            }

            i = j;
        }

        return ans;
    }
};