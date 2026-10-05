class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int m=INT_MAX;
        int ans;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    int sum=nums[i]+nums[j]+nums[k];
                    int res=abs(target-sum);
                    m=min(m,res);
                    if(m==res){
                        ans=sum;
                    }
                }
            }
        }
        return ans;
        
    }
};

// time complexity O(n^3)
// space complexity O(1)

input: nums = [-1,2,1,-4], target = 1
output: 2