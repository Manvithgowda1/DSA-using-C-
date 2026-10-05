class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
           if(m.find(nums[i])!=m.end()){
                if(abs(i-m[nums[i]])<=k){
                    return true;
                }
           }
           m[nums[i]]=i;
        }
        return false;
    }
};

// time complexity O(n)
// space complexity O(n)

Input: nums = [1,2,3,1]
k = 3
Output: true