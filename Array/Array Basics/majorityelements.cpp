class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=(nums.size()/2);
        return nums[n];
    }
};

// time complexity O(n log n)
// space complexitu O(log n)

input: nums =[3,2,3]
Output: 3
