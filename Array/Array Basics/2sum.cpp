class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        int n=nums.size();
        int temp;
        for(int i=0;i<n;i++){
            temp=target-nums[i];
            if(hash.find(temp)!=hash.end()){
                return {hash[temp],i};
            }
            hash[nums[i]]=i;

        }
        return {};
    
    }
};

//Example
nums =[2,7,11,15]
target =9
output=[0,1]
//Time Complexity O(n)
//space Complexity O(n)