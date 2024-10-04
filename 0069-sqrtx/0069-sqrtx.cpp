#define ll long long
class Solution {
public:
    int mySqrt(ll x) {
       ll lo=0;
       ll  hi=x + 1;
       while(hi-lo>1){     
       ll mid=lo+(hi-lo)/2;
       if(mid*mid>x){
               hi=mid;
       }
            else if(mid*mid<x){
                    lo=mid;
            }
               else{
                       return mid;
               }
       }
        // if(x - lo*lo >= hi*hi - x){
        //         return hi;
        // }
            return lo;
            
            
       
    }
};