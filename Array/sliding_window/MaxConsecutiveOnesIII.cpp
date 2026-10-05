class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;
        int left=0;
        int count0=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                count0++;
            }
            while(count0>k){
                if(nums[left]==0){
                    count0--;
                }
                left++;
            }
            ans=max(ans,right-left+1);
        }
        // if(count0<=k){
        //     return nums.size();
        // }
        return ans;
        
    }
};

// time complexity O(n)
// space complexity O(1)    

input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
output: 6