class Solution {
public:
        int f(int i,int j,int m,int n,vector<vector<int>>& dp){
           
                for(int i=m-1;i>=0;i--){
                        for(int j=n-1;j>=0;j--){
                                int current_val=0;
                           if(i==m-1 && j==n-1){
                                   current_val=1;
                                   
                           } 
                           if(i<m-1){
                           current_val+=dp[i+1][j];
                           }
                           if(j<n-1){
                           current_val+=dp[i][j+1];
                          
                        }
                                
                                 
                        dp[i][j]=current_val;
                        
                }}
                return dp[0][0];
                }  

    int uniquePaths(int m, int n) {
//         m rows and n columns ka grid
        
            vector<vector<int>> dp(m,vector<int>(n,-1));
            return f(0,0,m,n,dp);
            
    }
};