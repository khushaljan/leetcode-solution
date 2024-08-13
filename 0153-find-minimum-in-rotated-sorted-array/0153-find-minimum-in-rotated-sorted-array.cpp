class Solution {
public:
    int findMin(vector<int>& nums) {
        //3 4 5 1 2
            int n=nums.size();
            int low=0;
            int high=n-1;
            int mid;
            
            while(low<high){
                    mid=low+(high-low)/2;
                    if(nums[low]<nums[high]){
                    return nums[low];
            }
                    if(nums[low]<=nums[mid]){//0<2
                            low=mid+1;
                    }
                    else{
                            high=mid;
                    }
            }
            return nums[low];
    }
};