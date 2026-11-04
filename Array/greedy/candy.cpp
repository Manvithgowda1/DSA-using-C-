class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> count(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                count[i]=count[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                count[i]=max(count[i+1]+1,count[i]);
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=count[i];
        }
        return sum;

        
    }
};

// time complexity O(n) where n is the number of elements in the array
// space complexity O(n) as we are using a vector to store the count of candies for each child

input: ratings = [1,0,2]
output: 5