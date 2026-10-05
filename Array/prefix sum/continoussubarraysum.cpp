class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        unordered_map<int,int> m;
        m[0]=-1;
        for(int j=0;j<n;j++){
            int rem=prefix[j]%k;
            if(m.find(rem)!=m.end()){
                if(j-m[rem]>=2){
                    return true;
                }
            }else{
                m[rem]=j;
            }

        }
        return false;
        
    }
};

// time complexity O(n)
// space complexity O(n)

Input: nums = [23,2,4,6,7], k = 6
Output: true