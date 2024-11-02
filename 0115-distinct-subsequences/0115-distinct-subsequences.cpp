class Solution {
public:
        
        int distinctsubsequence(int m,int n,string& s,string& t,vector<vector<int>>& dp){
                
               const int MOD=1e9+7;
                
                for(int i=0;i<=m;i++){
                        dp[i][0]=1;
                }
                
                for(int j=1;j<=n;j++){
                        dp[0][j]=0;
                }
               for(int i=1;i<=m;i++){
                       for(int j=1;j<=n;j++){
               
                if(s[i-1]==t[j-1]){
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%MOD;
                }
                else{
                dp[i][j]=(dp[i-1][j])%MOD;
                }
                       }
               }
                return dp[m][n];
        }
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return distinctsubsequence(m,n,s,t,dp);
    }
};