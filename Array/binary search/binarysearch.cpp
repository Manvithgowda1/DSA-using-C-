class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int mid;
        int left=0;
        int right=n-1;
        while(left<=right){
            mid=(left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
};

// time complexity O(log n)
// space complexity O(1)

input: nums = [-1,0,3,5,9,12], target = 9
output: 4