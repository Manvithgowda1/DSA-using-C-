class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int currentend=0;
        int fastest=0;
        for(int i=0;i<nums.size()-1;i++){
            fastest=max(fastest,i+nums[i]);
            if(i==currentend){
                jump++;
                currentend=fastest;
            }
        }
        return jump;
        
    }
};

// time complexity O(n) where n is the number of elements in the array
// space complexity O(1) as we are not using any extra space

input: nums = [2,3,1,1,4]
output: 2

