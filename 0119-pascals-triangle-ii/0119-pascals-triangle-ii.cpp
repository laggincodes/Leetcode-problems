class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long  re=1;
        for (int i=0 ; i<= rowIndex ; i++ ){
            ans.push_back( re);
            re = re * (rowIndex - i ) / (i+1);
        }
        return ans ;
    }
};