class Solution {
public:
 int x[4] = {1,-1,0,0};
    int y[4] = {0,0,-1,1};

    bool isValid(int i, int j, int n, int m){
        if(i < 0 || i >= n || j < 0 || j >= m) return false;
        return true;
    }

    void dfs(vector<vector<char>>& grid, int i, int j, 
                    int n, int m,
                    vector<vector<bool>> &vis) {
        
        vis[i][j] = 1;

        for(int k = 0; k<4; k++){
            int row = i+x[k];
            int col = j+y[k];

            if(isValid(row, col, n, m) && grid[row][col] == '1' && !vis[row][col]){
                dfs(grid, row, col, n, m, vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        int islands = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    dfs(grid, i, j, n, m, vis);
                    islands++;
                }
            }
        }
        return islands;

        
    }

   
};
