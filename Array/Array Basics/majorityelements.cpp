class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=(nums.size()/2);
        return nums[n];
    }
};

// time complexity O(n log n)
// space complexitu O(log n)

input: nums =[3,2,3]
Output: 3

// optimal
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        // vector<pair<int, int>> vec(m.begin(), m.end());
        // sort(vec.begin(),vec.end(), [](auto &a, auto &b){
        //     return a.second>b.second;
        // });
        int maxf=0;
        int ans;
        for(auto &x:m){
            if(maxf< x.second){
                maxf=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};

// time complexity O(n)
// space complexity O(n)
