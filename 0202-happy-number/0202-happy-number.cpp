class Solution {
public:
    bool isHappy(int n) {
        while(n != 1 && n != 4) {// took help and the only option was to to exlude these as these are only one in single digit who gives us the desired result 
            int a = 0;

            while(n != 0) {
                int b = n % 10;
                a = a + b * b;
                n = n / 10;
            }

            n = a;
        }

        return n == 1;
    }
};