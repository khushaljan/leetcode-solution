class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res1="";
        string res2="";
        stack<char> st1;
        stack<char> st2;
        int m=s.size();
        int n=t.size();
        for(int i=0;i<m;i++){
                if(s[i]!='#'){
                        st1.push(s[i]);
                        
                }
                else{
                        if(!st1.empty()){
                        st1.pop();
                        }
                }
                
        }
                
        
         for(int j=0;j<n;j++){
                 if(t[j]!='#'){
                        st2.push(t[j]);
                        
                }
                else{
                        if(!st2.empty()){
                        st2.pop();
                        }
         }
         }
            
            while(!st1.empty()){
                    res1+=st1.top();
                    st1.pop();
            }
            
            while(!st2.empty()){
                    res2+=st2.top();
                    st2.pop();
            }
            
            reverse(res1.begin(),res1.end());
            reverse(res2.begin(),res2.end());
            cout<<res1<<" "<<res2<<endl;
            if(res1==res2){
                    return true;
            }
            else{
                    return false;
            }
    }
};