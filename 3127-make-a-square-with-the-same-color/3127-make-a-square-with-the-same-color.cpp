class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {

        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {

                int a = 0;

                if(grid[i][j] == 'B') a++;
                if(grid[i+1][j] == 'B') a++;
                if(grid[i][j+1] == 'B') a++;
                if(grid[i+1][j+1] == 'B') a++;

                if(a != 2) return true;
            }
        }

        return false;
    }
};