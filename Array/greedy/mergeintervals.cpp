class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(res.back()[1]>=intervals[i][0]){
                res.back()[1]=max(res.back()[1],intervals[i][1]);
            }
            else{
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};

// time complexity O(nlogn) where n is the number of intervals in the array
// space complexity O(n) as we are using a vector to store the merged intervals

input: intervals = [[1,3],[2,6],[8,10],[15,18]]
output: [[1,6],[8,10],[15,18]]