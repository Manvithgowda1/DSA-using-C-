class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> l1(nums1.begin(),nums1.end());
        set<int> l2(nums2.begin(),nums2.end());
        vector<int> res;
        for(int x:l2){
            if(l1.find(x)!= l1.end()){
                res.push_back(x);
            }
        }
        return res;
    }
};

// time complexity O(n log n+m log m)
// space complexity O(n+m)

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]