class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        if(nums.size()==s.size()){
            return false;
        }
        return true;
        
    }
};

// Time complexity o(n log n)
// space complexity o(n)

input: nums =[1,2,3,1]
Output: true

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
