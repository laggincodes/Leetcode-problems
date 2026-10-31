class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {

        vector<vector<int>> a;
        long long sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            a.push_back({nums[i], cost[i]});
            sum = sum + cost[i];
        }

        sort(a.begin(), a.end());

        long long b = 0;
        int x = 0;

        for(int i = 0; i < a.size(); i++) {
            b = b + a[i][1];

            if(b * 2 >= sum) {
                x = a[i][0];
                break;
            }
        }

        long long ans = 0;

        for(int i = 0; i < a.size(); i++) {
            long long d = a[i][0] - x;

            if(d < 0) d = -d;

            ans = ans + d * a[i][1];
        }

        return ans;
    }
};