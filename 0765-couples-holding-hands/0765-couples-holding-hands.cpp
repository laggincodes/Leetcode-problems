class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        
        int ans = 0;
        
        for(int i = 0; i < row.size(); i = i + 2){
            
            int a = row[i];
            int p;
            
            if(a % 2 == 0){
                p = a + 1;
            }
            else{
                p = a - 1;
            }
            
            if(row[i + 1] != p){
                
                for(int j = i + 2; j < row.size(); j++){
                    
                    if(row[j] == p){
                        
                        int x = row[i + 1];
                        row[i + 1] = row[j];
                        row[j] = x;
                        
                        ans++;
                        break;
                    }
                }
            }
        }
        
        return ans;
    }
};
// Dit it in 2nd try 