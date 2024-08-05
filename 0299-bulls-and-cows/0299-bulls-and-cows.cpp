class Solution {
public:
    string getHint(string secret, string guess) {
       int bulls=0;
       int cows=0;
       vector<int> v1(10,0);
       vector<int> v2(10,0);
            for(int i=0;i<secret.size();i++){
                    if(secret[i]==guess[i]){
                          bulls+=1;  
                    }
                    if(secret[i]!=guess[i]){
                    v1[secret[i]-'0']+=1;
                    v2[guess[i]-'0']+=1;
                    
                    
            }
            }
                    int sum=0;
              for(int i=0;i<v1.size();i++){
                    sum+=min(v1[i],v2[i]);  
              }      
                   
                    
                    return to_string(bulls)+'A'+to_string(sum)+'B';
        
    }
};