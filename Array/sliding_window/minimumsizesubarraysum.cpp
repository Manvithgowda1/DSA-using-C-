class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int left=0;
        int sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];

            while(sum>=target){
                ans=min(ans,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        if(ans==INT_MAX){
            ans=0;
        }
        return ans;
        
    }
};

// time complexity O(n)
// space complexity O(1)

input: target = 7, nums = [2,3,1,2,4,3]
output: 2