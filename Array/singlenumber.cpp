class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};

// time complexity O(n) where n is the number of elements in the array
// space complexity O(1) as we are not using any extra space

input: nums = [4,1,2,1,2]
output: 4