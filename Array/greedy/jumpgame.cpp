class Solution {
public:
    bool canJump(vector<int>& nums) {
        int f=0;
        for(int i=0;i<nums.size();i++){
            if(i>f){
                return false;
            }
            f= max(f,i+nums[i]);
        }
        return true;
    }
};

// time complexity O(n) where n is the number of elements in the array
// space complexity O(1) as we are not using any extra space

input: nums = [2,3,1,1,4]
output: true

