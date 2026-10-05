class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=nums.size()-1;i>=2;i--){
            int left=0,right=i-1;
            while(left<right){
                if(nums[left]+nums[right]>nums[i]){
                    count+=right-left;
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return count;
    }
};

// time complexity O(n^2)
// space complexity O(1)

input: nums = [2,2,3,4]
output: 3