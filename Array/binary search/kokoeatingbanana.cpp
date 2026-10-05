class Solution {
public:
    long long calculate(vector<int>& piles, int k){
        long long total_hours=0;
        for(int i=0;i<piles.size();i++){
            total_hours+=((long long)piles[i]+k-1)/k;
        }
        return total_hours;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int min_k=1;
        int max_k = *max_element(piles.begin(), piles.end());
        while(min_k<=max_k){
            int mid = min_k + (max_k - min_k) / 2;
            long long hours=calculate(piles,mid);
            if(hours<=h){
                max_k=mid-1;
            }
            else{
                min_k=mid+1;
            }    
        }
        return min_k;
        
    }
};

// time complexity O(n log m) where n is the number of piles and m is the maximum pile size
// space complexity O(1)

input: piles = [3,6,7,11], h = 8    
output: 4