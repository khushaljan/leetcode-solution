class Solution {
public:
        vector<int> divisibleSet(vector<int>& nums) {
    int n = nums.size();

    // Sort the array in ascending order
    sort(nums.begin(), nums.end());
    int i;
    vector<int> dp(n, 1);   // dp[i] stores the length of the divisible subset ending at arr[i]
    vector<int> hash(n, i); // hash[i] stores the previous index in the divisible subset ending at arr[i]

    for (int i = 0; i < n; i++) {
        hash[i] = i; // Initialize with the current index
        for (int prev_index = 0; prev_index < i; prev_index++) {
            if (nums[i] % nums[prev_index] == 0 && dp[i] < dp[prev_index] + 1) {

                dp[i] = 1 + dp[prev_index];
                hash[i] = prev_index;
            }
        }
    }

    int ans = -1;
    int lastIndex = -1;

    for (int i = 0; i < n; i++) {
        if (dp[i] > ans) {
            ans = dp[i];
            lastIndex = i;
        }
    }

    vector<int> temp;
    temp.push_back(nums[lastIndex]);

    // Reconstruct the divisible subset using the hash table
    while (hash[lastIndex] != lastIndex) {
        lastIndex = hash[lastIndex];
        temp.push_back(nums[lastIndex]);
    }

    // Reverse the array to get the correct order
    reverse(temp.begin(), temp.end());

    return temp;
}
    vector<int> largestDivisibleSubset(vector<int>& nums) {
           vector<int> ans;
            return ans = divisibleSet(nums);

    }
};