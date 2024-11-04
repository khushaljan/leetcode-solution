class Solution {
public:
        int profit(int ind,int buy,int n,vector<int>& prices,vector<vector<int>>& dp){
        
                int profitmax=0;
               
                
              
                       dp[n][0]=dp[n][1]=0;
               
               
                for(int ind=n-1;ind>=0;ind--){
                for(int buy=0;buy<=1;buy++){       
                
                if(buy==0){
                        profitmax=max(-prices[ind]+dp[ind+1][1],0+dp[ind+1][0]);
                }
                if(buy==1){
                        profitmax=max(prices[ind]+dp[ind+1][0],0+dp[ind+1][1]);
                }
                
                
                dp[ind][buy]=profitmax;
                }
                }
                return dp[ind][buy];
        }
                 
        
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return profit(0,0,n,prices,dp);
    }
};