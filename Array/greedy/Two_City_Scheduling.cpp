class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int count=0;
        int n=costs.size();
        sort(costs.begin(),costs.end(),[](auto &a,auto &b){
            return (a[0]-a[1])<(b[0]-b[1]);
        });
        for(int i=0;i<n/2;i++){
            count+=costs[i][0];
        }
        for(int i=n/2;i<n;i++){
            count+=costs[i][1];
        }
        return count;
        
        
    }
};

// time complexity O(n log n)
// space complexity O(log n)

Input:
costs = [[10,20],[30,200],[400,50],[30,20]]
Output:
110
