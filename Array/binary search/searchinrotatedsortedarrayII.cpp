class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        if(nums.size()==1 && nums[0]!=target){
            return false;
        }
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        if(nums.size()==1 && nums[0]!=target){
            return false;
        }
        return false;
    }
};

// time complexity O(n log n)
// space complexity O(1)

input: nums = [2,5,6,0,0,1,2], target = 0
output: true