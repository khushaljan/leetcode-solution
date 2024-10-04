// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo=0;//lo must be good not sure whether 1 is good or bad 
        int hi=n;//hi must always be on bad(ask in questiion)
        while(hi-lo>1){
                int mid=lo+(hi-lo)/2;
                if(isBadVersion(mid)==false){
                        lo=mid;
                }
                else{
                        hi=mid;
                }
        }
            return hi;
    }
};