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

// time complexity O(n*m) where n and m are the sizes of the two input arrays
// space complexity O(n) where n is the size of the output array

input: nums1 = [1,2,2,1], nums2 = [2,2]
output: [2,2]