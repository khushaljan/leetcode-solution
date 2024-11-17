class Solution {
public:
    int cutcost(int n, vector<int>& cuts, int i, int j, vector<vector<int>>& dp) {
        // Base case: if no cuts can be made in this segment
        if (i > j) {
            return 0;
        }

        // If the result is already computed, return it
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        int mini = INT_MAX;

        // Try making a cut at every position between i and j
        for (int ind = i; ind <= j; ind++) {
            int cost = cuts[j + 1] - cuts[i - 1] + 
                       cutcost(n, cuts, i, ind - 1, dp) + 
                       cutcost(n, cuts, ind + 1, j, dp);

            mini = min(mini, cost);
        }

        // Store the result in the memoization table
        return dp[i][j] = mini;
    }

    int minCost(int n, vector<int>& cuts) {
        // Add the endpoints to the cuts array
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());

        int c = cuts.size();

        // Memoization table: initialize with -1
        vector<vector<int>> dp(c, vector<int>(c, -1));

        // Solve for the full range of cuts
        return cutcost(n, cuts, 1, c - 2, dp);
    }
};
