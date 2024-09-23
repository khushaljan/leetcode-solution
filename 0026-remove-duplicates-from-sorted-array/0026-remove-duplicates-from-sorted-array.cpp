class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 1 1 2
        // set mein store kro
        set<int> set;
        int n=nums.size();
        for(int i=0;i<n;i++){
                set.insert(nums[i]);
                
        }
            int k=set.size();
            int j=0;
            for(int x:set){
                    nums[j]=x;
                    j++;
            }
            return k;
    }
};