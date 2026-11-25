class Solution {
public:
    bool checkString(string s) {
        bool ans = false ;
        for (int i =0 ; i <s.length();i++){
            if (s[i] == 'b'){
                ans = true;
            }
            else if (ans) {// cause if I would have used else then the answer would have changed 
                return false ;
            }
            

        }
        return true;
    }
};