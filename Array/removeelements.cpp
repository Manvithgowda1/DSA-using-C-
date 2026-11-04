class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();

        
    }
};

// time complexity O(n) where n is the number of elements in the array
// space complexity O(1) as we are not using any extra space

input: nums = [3,2,2,3], val = 3
output: 2, nums = [2,2]