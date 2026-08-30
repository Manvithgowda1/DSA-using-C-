class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(auto x:nums){
            total+=x;
        }
        int left_sum=0;
        for(int i=0;i<nums.size();i++){
            int right_sum=total-left_sum-nums[i];
            if(left_sum==right_sum){
                return i;
            }
            left_sum+=nums[i];
        }
        return -1;
    }
};

// time complexity O(n)
// space complexity O(1)

Input: nums = [1,7,3,6,5,6]
Output: 3