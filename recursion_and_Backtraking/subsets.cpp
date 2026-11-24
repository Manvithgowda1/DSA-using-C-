class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index,vector<int>& nums,vector<int>& temp){
        if(index==nums.size()){
            ans.push_back(temp);
            return;

        }
        temp.push_back(nums[index]);
        solve(index+1,nums,temp);
        temp.pop_back();
        solve(index+1,nums,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        solve(0,nums,temp);
        return ans;
        
    }
};

// time complexity O(2^n) where n is the number of elements in the input vector
// space complexity O(n) where n is the number of elements in the input vector

input: nums = [1,2,3]
output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]