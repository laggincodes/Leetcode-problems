class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long odd = 0;
        long long even = 1;
        long long ans = 0;
        int sum = 0;
        int mod = 1000000007; // needed help 

        for(int i = 0; i < arr.size(); i++) {
            sum = sum + arr[i];

            if(sum % 2 == 0) {
                ans = ans + odd;
                even++;
            }
            else {
                ans = ans + even;
                odd++;
            }

            ans = ans % mod;
        }

        return ans;
    }
};