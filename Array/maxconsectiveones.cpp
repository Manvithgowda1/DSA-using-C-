class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_1=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                max_1=max(max_1,count);
            }
            else{
                count=0;

            }

        }
        return max_1;
        
    }
};

// time complexity O(n) where n is the number of elements in the array
// space complexity O(1) as we are not using any extra space

input: nums = [1,1,0,1,1,1]
output: 3