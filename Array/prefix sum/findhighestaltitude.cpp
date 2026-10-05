class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high=0;
        int alti=0;
        for(int i=0;i<gain.size();i++){
            high+=gain[i];
            alti=max(high,alti);
        }
        return alti;
        
    }
};

// time complexity O(n)
// space complexity O(1)    

Input: gain = [-5,1,5,0,-7]
Output: 1