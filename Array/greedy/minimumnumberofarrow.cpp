class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=1;
        if(points.empty())return 0;
        sort(points.begin(),points.end());
        int two=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=two){
                two=min(points[i][1],two);
            }
            else{
                count++;
                two=points[i][1];
            }
        }
        return count;
    }
};

// time complexity O(nlogn) where n is the number of points in the array
// space complexity O(1) as we are not using any extra space

input: points = [[10,16],[2,8],[1,6],[7,12]]
output: 2