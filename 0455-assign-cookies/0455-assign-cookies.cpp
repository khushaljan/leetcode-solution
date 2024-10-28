class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0;
        int j=0;
        int m=g.size();
        int n=s.size();
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
      while(i<m && j<n){
              if(s[j]>=g[i]){
                      count++;
                      i++;
              }
              j++;
      }
        
  return count;          
    }
};