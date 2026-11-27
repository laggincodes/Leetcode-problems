class Solution {
public:
    string sortSentence(string s) {
        string x="",k;
        char a ='1';
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                cnt++;
            }
        }
        for(int i=0;i<s.length();i++){
            k="";
            for(int j=0;j<s.length();j++){
                if(s[j]==' '){
                    k="";
                    continue;
                }
                if(s[j]==a){
                    x=x+k;
                    a++;
                    break;
                }
                else{
                    k=k+s[j];
                }
            }
            if(cnt--){
                x=x+" ";
            }
            else{
                break;
            }
        }
        return x;
    }
};