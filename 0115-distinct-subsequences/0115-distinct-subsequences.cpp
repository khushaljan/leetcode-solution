class Solution {
public:
        int distinctsubsequence(int i,int j,string& s,string& t,vector<vector<int>>& dp){
                 if(i<0 && j>=0){
                    return 0;
                }
                if(j<0){
                        return 1;
                }
                if(dp[i][j]!=-1){
                        return dp[i][j];
                }
                if(s[i]==t[j]){
                return dp[i][j]=distinctsubsequence(i-1,j-1,s,t,dp)+distinctsubsequence(i-1,j,s,t,dp);
                }
                else{
                return dp[i][j]=distinctsubsequence(i-1,j,s,t,dp);
                }
                
                
        }
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return distinctsubsequence(m-1,n-1,s,t,dp);
    }
};