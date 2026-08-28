class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int expected=1;
        for(int x:nums){
            if(x<expected){
                continue;
            }
            if(x==expected){
                expected++;
            }
            else{
                return expected;
            }
        }
        return expected;
        
    }
};

// time complexity O(n log n)
// space complexity O(1)

Input:nums = [1,2,0]
Output: 3
