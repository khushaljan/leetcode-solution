class Solution {
public:
    int maxamount(int ind, vector<int>& nums, vector<int>& dp) {
        dp[0] = nums[0];
        for (int i = 1; i <= ind; i++) {
            int pick = nums[i];
            if (i > 1) {
                pick += dp[i - 2];  // Pick the current house and add value from i-2
            }
            int nonpick = dp[i - 1];  // Don't pick the current house
            dp[i] = max(pick, nonpick);  // Choose the maximum between picking and not picking
        }
        return dp[ind];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];  // Special case: only one house
        if (n == 2) return max(nums[0], nums[1]);  // Special case: two houses

        vector<int> dp(n, 0);  // Initialize dp array
        return maxamount(n - 1, nums, dp);  // Call the maxamount function
    }
};
