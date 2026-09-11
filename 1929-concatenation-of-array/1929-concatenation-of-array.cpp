class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size() ;
        vector <int> finalarr(n*2);

        for (int i =0 ; i < n*2 ; i++){
            finalarr[i] = nums [i%n];
        }
    return finalarr;
    }

};