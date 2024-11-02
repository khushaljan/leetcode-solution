class Solution {
public:
        
        int distinctsubsequence(int m,int n,string& s,string& t){
                if (n == 0) return 1;
        if (m < n) return 0;
               const int MOD=1e9+7;
                
               vector<int> prev(n+1,0);
               prev[0]=1;
               for(int i=1;i<=m;i++){
                       for(int j=n;j>=1;j--){
               
                if(s[i-1]==t[j-1]){
                prev[j]=(prev[j-1]+prev[j])%MOD;
                }
                
                       }
               }
                return prev[n];
        }
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();
        
        return distinctsubsequence(m,n,s,t);
    }
};