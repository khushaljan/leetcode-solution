class Solution {
public:
        int profit(int ind,int buy,int n,vector<int>& prices){
        
                int profitmax=0;
               
                vector<int> ahead(2,0);
                vector<int> cur(2,0);
              
                       ahead[0]=ahead[1]=0;
               
               
                for(int ind=n-1;ind>=0;ind--){
                for(int buy=0;buy<=1;buy++){       
                
                if(buy==0){
                        profitmax=max(-prices[ind]+ahead[1],0+ahead[0]);
                }
                if(buy==1){
                        profitmax=max(prices[ind]+ahead[0],0+ahead[1]);
                }
                
                
                cur[buy]=profitmax;
                }
                        ahead=cur;
                }
                return cur[0];
        }
                 
        
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        
        return profit(0,0,n,prices);
    }
};