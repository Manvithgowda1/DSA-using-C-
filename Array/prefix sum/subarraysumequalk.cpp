class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        vector<int> prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        unordered_map<int,int> m;
        for(int j=0;j<n;j++){
            if(prefix[j]==k)count++;
            int sum=prefix[j]-k;
            if(m.find(sum)!=m.end()){
                count+=m[sum];
            }
            // if(m.find(sum)==m.end()){
            //     m[sum]=0;
            // }
            m[prefix[j]]++;
        }
        return count;
        
    }
};

// time complexity O(n)
// space complexity O(n)

input: nums = [1,1,1], k = 2
output: 2