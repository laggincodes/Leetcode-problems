class Solution {
public:
    bool isPowerOfFour(int n) {
        int ans =1;
        for (int i = 0 ; i < 16 ; i++ ){
            ans = pow(4,i);
            if (n==ans){
                return true;
            }

        
        }
        return false ;
  
    }
};
// how to do it without loops and recursion 