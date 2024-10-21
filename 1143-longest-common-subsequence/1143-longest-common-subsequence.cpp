class Solution {
private:
    string s1, s2;
    vector<vector<int>> dp;
    int helper(int idx1, int idx2){
        if (idx1==0||idx2==0) dp[idx1][idx2] = 0;
        if (dp[idx1][idx2]!=-1) return dp[idx1][idx2];

        if (s1[idx1-1]==s2[idx2-1]) {
            dp[idx1][idx2] = helper(idx1-1, idx2-1)+1;
        } else {
            dp[idx1][idx2] = max(helper(idx1-1, idx2), helper(idx1, idx2-1));
        }
        return dp[idx1][idx2];
    }

public:
    int longestCommonSubsequence(string text1, string text2) {
        s1 = text1, s2 = text2;
        if (s1.size()==0 || s2.size()==0) return 0;

        dp = vector<vector<int>> (s1.size()+1, vector<int>(s2.size()+1, -1));
        return helper(s1.size(), s2.size());
    }
};