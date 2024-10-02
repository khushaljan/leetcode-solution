class Solution {
public:
    int maxamount(int ind, vector<int>& nums) {
        int prev = nums[0];   // Initialize the maximum sum ending at the previous element
    int prev2 = 0;       // Initialize the maximum sum ending two elements ago
    int cur_i;
    for (int i = 1; i < ind; i++) {
        int pick = nums[i];  // Maximum sum if we pick the current element
        if (i > 1)
            pick += prev2;  // Add the maximum sum two elements ago
        
        int nonPick = 0 + prev;  // Maximum sum if we don't pick the current element
        
        cur_i = max(pick, nonPick);  // Maximum sum ending at the current element
        prev2 = prev;   // Update the maximum sumprev_i two elements ago
        prev = cur_i;   // Update the maximum sum ending at the previous element
    }
    
    return cur_i;
    }

    int rob(vector<int>& nums) {
        int ind = nums.size();
        if (ind == 1) return nums[0];  // Special case: only one house
        if (ind == 2) return max(nums[0], nums[1]);  // Special case: two houses


        return maxamount(ind , nums);  // Call the maxamount function
    }
};
