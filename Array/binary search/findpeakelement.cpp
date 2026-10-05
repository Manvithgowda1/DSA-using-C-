class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int n=nums.size()-1;
        int right=n;
        int mid;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid+1]>nums[mid]){
                left=mid+1;
            }
            else{
                right=mid;
            }
            
        }
        return left;
        
    }
};

// time complexity O(log n)
// space complexity O(1)

input: nums = [1,2,3,1]
output: 2