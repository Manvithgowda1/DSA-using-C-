class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
// time complexity O(n)
// space complexity O(1)

input: nums =[0,1,0,3,12]
Output: [1,3,12,0,0]
