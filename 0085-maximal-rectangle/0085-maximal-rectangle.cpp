class Solution {
public:
    int f(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> st;

        // Calculate left limits
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            left[i] = st.empty() ? 0 : st.top() + 1;
            st.push(i);
        }

        // Clear stack for right limits
        while (!st.empty()) {
            st.pop();
        }

        // Calculate right limits
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            right[i] = st.empty() ? n - 1 : st.top() - 1;
            st.push(i);
        }

        // Calculate maximum area
        int maxArea = 0;
        for (int i = 0; i < n; ++i) {
            maxArea = max(maxArea, arr[i] * (right[i] - left[i] + 1));
        }
        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }

        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> heights(n, 0);  // Initialize heights for the histogram
        int maxArea = 0;

        // Process each row to build the histogram
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Update the heights for the current row
                if (matrix[i][j] == '1') {
                    heights[j]++;
                } else {
                    heights[j] = 0;
                }
            }
            // Calculate the max area for the current histogram
            maxArea = max(maxArea, f(heights));
        }

        return maxArea;
    }
};

