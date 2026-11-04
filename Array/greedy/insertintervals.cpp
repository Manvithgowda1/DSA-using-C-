class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        if (intervals.empty()){
            res.push_back(newInterval);
            return res;
        } 
        int i=0;
        if(intervals[0][0]>newInterval[0]){
            res.push_back(newInterval);
        }
        while(i < intervals.size() && intervals[i][0] <= newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }
        if(res.back()[1]>=newInterval[0]){
            res.back()[1]=max(res.back()[1],newInterval[1]);
        }
        else{
            res.push_back(newInterval);
        }

        while(i<intervals.size()){
            if(res.back()[1]>=intervals[i][0]){
                res.back()[1]=max(res.back()[1],intervals[i][1]);
            }
            else{
                res.push_back(intervals[i]);
            }
            i++;
        }
        return res;
    }
};

// time complexity O(n) where n is the number of intervals in the array
// space complexity O(n) as we are using a vector to store the merged intervals

input: intervals = [[1,3],[6,9]], newInterval = [2,5]
output: [[1,5],[6,9]]