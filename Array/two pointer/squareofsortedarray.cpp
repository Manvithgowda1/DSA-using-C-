class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};

// time complexity O(n log n)
// space complexity O(1)

input: nums = [-4,-1,0,3,10]
output: [0,1,9,16,100]