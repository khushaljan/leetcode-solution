class Solution {
public:
    int dp[31]={-1};
    int fib(int n) {
        //input n
        //output 0 to n-1 fibonacci
          if(n<=1){
                  return n;
          }      
          if(dp[n]!=0){
                  return dp[n];
          }
       return dp[n]=fib(n-1)+fib(n-2);
        
    }
};