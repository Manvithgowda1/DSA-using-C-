class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0;
        int count=0;
        int sum=1;
        if (k <= 1) return 0;
        for(int right=0;right<nums.size();right++){
            sum=sum*nums[right];
            while(sum>=k){
                sum=sum/nums[left];
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
};

// time complexity O(n)
// space complexity O(1)

input: nums = [10,5,2,6], k = 100
output: 8