class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
     
       int j=0;
       int k=10;
       int n=s.size();
       unordered_map<string,int> umap;
       vector<string> ans;
         if(n<k){
                 return ans;
         }
        while(j<n-9){
              
              string substring=s.substr(j,10);
              
             
                
                    if(umap.count(substring)){
                      if(umap[substring]==1){
                              ans.push_back(substring);
                              
                      }
                    }
                     umap[substring]++;
                      if(umap[substring]==0){
                              umap.erase(substring);
                      }
                  
                  
                      j++;
                      
              
                
        }
           return ans;
    }
};