class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=nums1.size()-1;int k=n-1;
        while(j>i && k>=0){
            nums1[j--]=nums2[k--];
        }
        sort(nums1.begin(),nums1.end());
            
    }
};

// time complexity O((m+n)log(m+n))
// space complexity O(log(m+n))

Input
nums1 =[1,2,3,0,0,0]
m =3
nums2 =[2,5,6]
n =3
Output: [1,2,2,3,5,6]
