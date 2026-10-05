class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0]=1;
        int count=0;
        int odd=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                odd++;
            }
            int temp=odd-k;
            if(m.find(temp)!=m.end()){
                count+=m[temp];
            }
            m[odd]++;
        }
        return count;
    }
};

// time complexity O(n)
// space complexity O(n)

input: nums = [1,1,2,1,1], k = 3
output: 2