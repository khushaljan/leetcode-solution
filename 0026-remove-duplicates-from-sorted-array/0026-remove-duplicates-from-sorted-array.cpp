class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 1 1 2
         //   i=0 j=1 equal  consider 1
         //   i=1 j=2 not equal not consider 2
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
               if(nums[i]!=nums[j]){
                       j++;
                       nums[j]=nums[i];
                       
               } 
        }
            return j+1;
         
    }
};