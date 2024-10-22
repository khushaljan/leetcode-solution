class Solution {
    bool solve(int idx, vector<int>& nums, int val, vector<vector<int>> &dp) {
        if (val == 0) {
            return true;
        }
        if (idx == nums.size()) {
            return false;
        }

        if (dp[idx][val] != -1) {
            return dp[idx][val];
        }

        if (nums[idx] <= val) {
            bool f1 = solve(idx + 1, nums, val - nums[idx], dp);
            bool f2 = solve(idx + 1, nums, val, dp);
            return dp[idx][val] = f1 || f2;
        } else {
            return dp[idx][val] = solve(idx + 1, nums, val, dp);
        }
    }

public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        // If the total sum is odd, we can't partition it into two equal subsets
        if (sum % 2 != 0) return false;

        int val = sum / 2;

        // Initialize dp array with -1
        vector<vector<int>> dp(nums.size(), vector<int>(val + 1, -1));

        return solve(0, nums, val, dp);
    }
};
