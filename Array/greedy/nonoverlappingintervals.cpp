class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0;
        sort(intervals.begin(), intervals.end(), [](const vector<int>&a, const vector<int> &b) {
            return a[1]< b[1];  
        });
        int end=intervals[0][1];

        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<end){
                count++;
            }
            else{
                end=intervals[i][1];
            }
        }
        return count;
        
    }
};

// time complexity O(nlogn) where n is the number of intervals in the array
// space complexity O(1) as we are not using any extra space

input: intervals = [[1,2],[2,3],[3,4],[1,3]]
output: 1