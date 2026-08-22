class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        if(nums.size()==s.size()){
            return false;
        }
        return true;
        
    }
};

// Time complexity o(n log n)
// space complexity o(n)

input: nums =[1,2,3,1]
Output: true

