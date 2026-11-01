class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),[](auto &a,auto &b){
            return a[1]<b[1];
        });
        int count=1;
        int c=pairs[0][1];
        for(int i=1;i<pairs.size();i++){
            if(c<pairs[i][0]){
                count++;
                c=pairs[i][1];
            }
        }
        return count;
        
    }
};

// time complexity O(n log n)
// space complexity O(log n)

Input:
pairs = [[1,2],[2,3],[3,4]]
Output:
2
