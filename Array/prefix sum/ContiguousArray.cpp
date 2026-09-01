class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        m[0]=-1;
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
            }
            else{
                sum--;
            }
            if(m.find(sum)!=m.end()){
                ans=max(ans,i-m[sum]);
            }else{
                m[sum]=i;
            }
        }
        return ans;
    }
};

// time complexity O(n)
// space complexity O(n)    

input: nums = [0,1]
output: 2