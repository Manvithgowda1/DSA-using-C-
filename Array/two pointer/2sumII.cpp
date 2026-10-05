class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int sum=nums[left]+nums[right];
            if(sum==target){
                return {left+1,right+1};
            }
            if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};
    }
};

// time complexity O(n)
// space complexity O(1)

input: nums = [2,7,11,15], target = 9
output: [1,2]