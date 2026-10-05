class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,1);
        res[0]=1;
        for(int i=1;i<n;i++){
            res[i]=res[i-1]*nums[i-1];
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            res[i] *= suffix;
            suffix *= nums[i];
        }
        return res;
    }
};

// time complexity O(n)
// space complexity O(1) (excluding the output array)   

input: nums = [1,2,3,4]
output: [24,12,8,6]