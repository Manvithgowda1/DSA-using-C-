class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};

// Time complexity o(n)
// space complexityo(1)
Input: nums =[-2,1,-3,4,-1,2,1,-5,4]
Output: 6
