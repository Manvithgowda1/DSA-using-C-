class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0;
        long long sum=0;
        int count=0;
        for(int right=0;right<nums.size();right++){
            // if(nums[left]<nums[right]){
            //     sum+=nums[right]-nums[left];
            //     // nums[left]+=sum;
            //     left++
            // }else if(nums[left]>nums[right]){
            //     sum+=nums[left]-nums[right];
            //     // nums[right]+=sum;
            //     left++
            // }
            sum+=nums[right];
            while((long long)nums[right]*(right-left+1)-sum>k){
                sum-=nums[left];
                left++;
            }
            count=max(count,right-left+1);
        }
        return count;
        
    }
};

// time complexity O(n log n)
// space complexity O(1) (excluding the output array)   

input: nums = [1,2,4], k = 5
output: 3