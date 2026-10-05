class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int longest=0;
            for(auto i:s){
                if (s.find(i- 1) == s.end()) {
                    int current = i;
                    int length = 1;
                    while (s.find(current + 1) != s.end()) {
                        current++;
                        length++;
                    }
                longest=max(longest,length);
                }
            }
        return longest;
    }
};

// time complexity O(n)
// space complexity O(n)

Input: nums = [100,4,200,1,3,2]
Output: 4