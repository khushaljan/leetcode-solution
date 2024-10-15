class Solution {
public:
        int f(int i,int j,int m,int n,vector<vector<int>>& dp){
           
            if (i == m - 1 && j == n - 1) {
            return 1;
        }
        // If we go out of bounds, return 0 (no valid path)
        if (i >= m || j >= n) {
            return 0;
        }
        // Check if the current state is already computed
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        // Recursive calls: move down and right
        int down = f(i + 1, j, m, n, dp);
        int right = f(i, j + 1, m, n, dp);

        // Store the computed result in dp array and return it
        

        return dp[i][j]=down+right;
                
        }
    int uniquePaths(int m, int n) {
//         m rows and n columns ka grid
        
            vector<vector<int>> dp(m,vector<int>(n,-1));
            return f(0,0,m,n,dp);
            
    }
};