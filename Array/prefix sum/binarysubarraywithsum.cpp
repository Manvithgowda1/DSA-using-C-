class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> m;
        m[0]=1;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
           sum+=nums[i];
           int tar=sum-goal;
           if(m.find(tar)!=m.end()){
               count+=m[tar]; 
           }
            m[sum]++; 
        }
        return count;
    }
};

// time complexity O(n)
// space complexity O(n)    

input: nums = [1,0,1,0,1], goal = 2
output: 4