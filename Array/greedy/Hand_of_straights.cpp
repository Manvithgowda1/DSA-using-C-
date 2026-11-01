class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return false;
        }
        sort(hand.begin(),hand.end());
        map<int,int> freq;
        for(int x:hand){
            freq[x]++;
        }
        for(int x:hand){
            if(freq[x]==0){
                continue;
            }
            for(int j=0;j<groupSize;j++){
                if(freq[x+j]==0){
                    return false;
                }
                freq[x+j]--;
            }
        }
        return true;
    }
};

// time complexity O(n log n)
// space complexity O(n)

Input:
hand = [1,2,3,6,2,3,4,7,8]
groupSize = 3
Output:
true
        
