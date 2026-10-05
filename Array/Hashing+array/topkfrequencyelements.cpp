class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> res;
        int c=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v(m.begin(),m.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;   // Sort by value
        });
        for(auto p:v){
            if(c==k){
                break;
            }
            res.push_back(p.first);
            c++;


        }
        return res;
    }
};

// Time complexity: O(n + u log u) → worst case O(n log n)
// Space complexity: O(u + k) → O(u) → worst case O(n)
// where u are number of unique elements in the array

Input: nums =[1,1,1,2,2,3]
k =2
Output: [1,2]