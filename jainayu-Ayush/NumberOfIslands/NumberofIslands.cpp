class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0) {
            return 0;
        }
        
        int totalIslands = 0;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1'){
                    totalIslands += helperDFS(grid, i, j);
                }
            }
        }
        return totalIslands;
    }
    
    int helperDFS(vector<vector<char>>& grid, int i, int j){
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == '0'){
            return 0;
        }
        
        grid[i][j] = '0';
        
        helperDFS(grid, i + 1, j);
        helperDFS(grid, i - 1, j);
        helperDFS(grid, i, j + 1);
        helperDFS(grid, i, j - 1);
        
        return 1;
    }
    
};