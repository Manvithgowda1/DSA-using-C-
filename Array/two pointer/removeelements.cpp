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

// time complexity O(n)
// space complexity O(1)

input: nums = [3,2,2,3], val = 3
output: 2, nums = [2,2]