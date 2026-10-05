class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double total=sum;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            total=max(sum,total);
        }
        return total/k;
        
    }
};

// time complexity O(n)
// space complexity O(1)        

input: nums = [1,12,-5,-6,50,3], k = 4
output: 12.75