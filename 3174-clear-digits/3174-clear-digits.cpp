class Solution {
public:
    string clearDigits(string s) {
        string res="";
        int n=s.size();
        stack<int> st;
        for(int i=0;i<n;i++){
                
                st.push(s[i]);
                if(isdigit(st.top())){
                        st.pop();
                        
                }
                if(!st.empty()&& isdigit(s[i]) && !isdigit(st.top())){
                        st.pop();
                
                }
                
                
        }
            while(!st.empty()){
                    res += st.top();
                    st.pop();
            }
            reverse(res.begin(),res.end());
            return res;
    }
};