class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        unordered_map<int,int> arr;
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(auto &p:arr){
            if(p.second>1){
                res.push_back(p.first);
            }
        }
        return res;
        
    }
};

// time complexity O(n)
// space complexity O(n)

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]