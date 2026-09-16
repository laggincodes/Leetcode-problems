class Solution {
public:
    bool isPowerOfThree(int n) {
        int ans =1;
        for (int i = 0 ; i < 20 ; i++ ){
            ans = pow(3,i);
            if (n==ans){
                return true;
            }

        
        }
        return false ;
  
    }
};