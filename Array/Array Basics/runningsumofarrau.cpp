class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            res.push_back(sum);
        }
        return res;
    }
};

// time complexity O(n)
// space complexity O(n)

Input: nums =[1,2,3,4]
Output: [1,3,6,10]
