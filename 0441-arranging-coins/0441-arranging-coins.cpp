
class Solution {
public:
    int arrangeCoins(int n) {
        // 0 - n
        //low=0 high=n
        //(0+n)/2
        //1 2 3 2
        // 1 row -> 1 coin
        //2 row->1 coin
        //3 row->1 coin
        //4 row->1 coin
        //5 row->1 coin
         //max rows possible for coins n(n+1)/2
         //low ->k*k+1/2<=n 5<=6
         //high-> k*k+1/2>n 
         int low=1;
         int high=n;
         while(high-low>1){
                 long long mid=low+(high-low)/2;
                 long long coin=(mid)*(mid+1)/2;
                 if(coin<=n){
                         low=mid;
                 }
                 else{
                         high=mid;
                 }
         }
            
            
            
            return low;
            
         
            
        
    }
};