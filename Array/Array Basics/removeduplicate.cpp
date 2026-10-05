class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        nums.assign(s.begin(), s.end());
        int k=nums.size();
        return k;
        
    }
};

// time complexity O(n log n)
// space complexity O(n)

Input:nums =[1,1,2]
Output: [1,2]