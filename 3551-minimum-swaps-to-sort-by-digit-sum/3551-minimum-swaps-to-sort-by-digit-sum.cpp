class Solution {
public:
    int minSwaps(vector<int>& nums) {

        int n = nums.size();

        vector<pair<pair<int,int>,int>> a;

        for(int i = 0; i < n; i++) {
            int sum = 0;
            int x = nums[i];

            while(x > 0) {
                sum += x % 10;
                x /= 10;
            }

            a.push_back({{sum, nums[i]}, i});
        }

        sort(a.begin(), a.end());

        vector<int> b(n);

        for(int i = 0; i < n; i++) {
            b[i] = a[i].second;
        }

        vector<bool> c(n, false);
        int ans = 0;

        for(int i = 0; i < n; i++) {

            if(c[i] || b[i] == i) continue;

            int j = i;
            int cnt = 0;

            while(!c[j]) {
                c[j] = true;
                j = b[j];
                cnt++;
            }

            ans += cnt - 1;
        }

        return ans;
    }
};