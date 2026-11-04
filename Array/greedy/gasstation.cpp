class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0;
        int curgas=0;
        int j=0;
        int start=0;
        int n=gas.size();
        for(int i=0;i<gas.size();i++){
            curgas+=gas[i]-cost[i];
            sum+=gas[i]-cost[i];
            if(curgas<0){
                curgas=0;
                start=i+1;
            }

        }
        if(sum<0){
                return -1;
            }
        return start;
        
    }
};

// time complexity O(n) where n is the number of elements in the array
// space complexity O(1) as we are not using any extra space

input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
output: 3