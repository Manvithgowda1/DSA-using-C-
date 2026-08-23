class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int out;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                out=i;
                break;
            }
        }
        return out;
    }
};

// time complexity O(n log n)
// space complexity O(log n)

Input: nums =[3,0,1]
Output: 2
