class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> m;
        int total=INT_MAX;
        for(auto x:nums){
            m[x]++;
        }
        vector<pair<int,int>> s(m.begin(),m.end());
        sort(s.begin(),s.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        int maxFreq = s[0].second;
        auto it=s.begin();
        while(it!=s.end()){
            int left=0;
            int right=nums.size()-1;
            int sum;
            if(it->second!=maxFreq){
                break;
            }
            while(left < nums.size() && nums[left]!=it->first){
                left++;
            }
            while(right >= 0 && nums[right]!=it->first){
                right--;
            }
            sum=right-left+1;
            total=min(total,sum);
            it++;
        }
        return total;
    }
};

// time complexity O(n^2)
// space complexity O(n)

Input: nums = [1,2,2,3,1]
Output: 2
