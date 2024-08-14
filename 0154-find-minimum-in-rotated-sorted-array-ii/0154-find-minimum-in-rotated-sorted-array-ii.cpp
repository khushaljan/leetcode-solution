class Solution {
public:
    int findMin(vector<int>& nums) {
        //3 4 5 1 2
            int n=nums.size();
            int low=0;
            int high=n-1;
            int mid;
       
            
        if (nums[low] < nums[high]) return nums[low];
        
        while (low < high) {
            int mid = low + (high - low) / 2;
                
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else if (nums[mid] < nums[high]) {
                high = mid;
            } else {
                high--;
            }
        }
        

                            
            return nums[high];
    }
};