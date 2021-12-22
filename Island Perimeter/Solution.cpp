class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), cnt=0;
        
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (grid[i][j]) {
                    cnt += 4;
                    if (i>0 && grid[i-1][j]) cnt -= 2; // 기준의 왼쪽과 위쪽
                    if (j>0 && grid[i][j-1]) cnt -= 2;
                }
            }
        }
        return cnt;
    }
};
