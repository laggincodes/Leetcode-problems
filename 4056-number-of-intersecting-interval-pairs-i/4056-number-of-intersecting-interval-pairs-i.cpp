class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int count = 0;

        for (int i = 0; i < n; ++i) {
            int a = intervals[i][0];
            int b = intervals[i][1];

            for (int j = i + 1; j < n; ++j) {
                int c = intervals[j][0];
                int d = intervals[j][1];

                if (a <= d && c <= b) {
                    count++;
                }
            }
        }
        return count;
    }
};