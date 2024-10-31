class Solution {
public:
    int palindrome(int i,int j,string& s,vector<vector<int>>& dp){
         
            if(i==j && s[i]!=s[j]){
                    return 0;
            }
            
            if(i==j && s[i]==s[j]){
                    return 1;
            }
            
            if(j==i-1 && s[i]==s[j]){
                    return 0;
            }
            if(dp[i][j]!=-1){
                    return dp[i][j];
            }
            if(s[i]==s[j]){
            return dp[i][j]=2+palindrome(i+1,j-1,s,dp);
         }
            else{
                return dp[i][j]=max(palindrome(i,j-1,s,dp),palindrome(i+1,j,s,dp));   
            }
            
         
    }
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return palindrome(0,n-1,s,dp);
    }
};

