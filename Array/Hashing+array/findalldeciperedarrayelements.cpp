class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n+1,0);
        vector<int> s;
        for(int i=0;i<n;i++){
            hash[nums[i]]=1;
        }
        for(int i=1;i<=n;i++){
            if(hash[i]!=1){
                s.push_back(i);
            }
        }
        return s;
    }
};

// time complexity O(n)
// space complexity O(n)

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]