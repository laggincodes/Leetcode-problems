class Solution {
public:
    char repeatedCharacter(string s) {        
        int a[26] = {0};
        
        for(int i = 0; i < s.size(); i++){            
            int x = s[i] - 'a';
            
            if(a[x] == 1){
                return s[i];
            }
            
            a[x] = 1;
        }
        
        return 'a';
    }
};