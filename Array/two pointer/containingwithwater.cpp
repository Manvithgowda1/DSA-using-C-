class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int min_height,dist,cur_area;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            min_height=min(height[i],height[j]);
            dist=j-i;
            cur_area=min_height*dist;
            area=max(area,cur_area);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return area;
        
    }
};

// time complexity O(n)
// space complexity O(1)

input: height = [1,8,6,2,5,4,8,3,7]
output: 49