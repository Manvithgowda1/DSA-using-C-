class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int lmax=0;
        int rmax=0;
        int sum=0;
        while(left<right){
            lmax=max(lmax,height[left]);
            rmax=max(rmax,height[right]);
            if(lmax<rmax){
                sum+=lmax-height[left];
                left++;
            }
            else{
                sum+=rmax-height[right];
                right--;
            }
            

        }
        return sum;
        
    }
};

// time complexity O(n)
// space complexity O(1)

input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
output: 6