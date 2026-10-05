class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    res.push_back(nums1[i]);
                    nums2[j]=-1;
                    break;

                }
            }
        }
        return res;
    }
};

// time complexity O(n*m)
// space complexity O(1)

Input:
nums1 = [1,2,2,1]
nums2 = [2,2]
Output: [2,2]