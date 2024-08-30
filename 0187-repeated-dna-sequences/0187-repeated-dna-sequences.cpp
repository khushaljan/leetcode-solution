class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int j=0;
        unordered_map<string,int> umap;
        vector<string> ans;
            int k=10;
            int n=s.size();
            // if(n<k){
            //         return ans;
            // }
         while(j<n){
        string substring=s.substr(j,10);
        
                
                   if(umap.count(substring)){
                           if(umap[substring]==1){
                                   ans.push_back(substring);
                           }
                           
                   }
                         umap[substring]++;  
                        
                         

                         j++;
                 }
         
            return ans;
    }
};