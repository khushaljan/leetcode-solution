class Solution {
public:
        int profit(int ind,int buy,int n,vector<int>& prices,vector<vector<int>>& dp){
        
                int profitmax=0;
                if(ind==n){
                        return 0;
                }
                
                if(dp[ind][buy]!=-1){
                        return dp[ind][buy];
                }
                
                if(buy==0){
                        profitmax=max(-prices[ind]+profit(ind+1,1,n,prices,dp),0+profit(ind+1,0,n,prices,dp));
                }
                else{
                        profitmax=max(prices[ind]+profit(ind+1,0,n,prices,dp),0+profit(ind+1,1,n,prices,dp));
                }
                
               return dp[ind][buy]=profitmax;
                
        }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return profit(0,0,n,prices,dp);
    }
};