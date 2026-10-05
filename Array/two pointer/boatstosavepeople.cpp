class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0;
        int left=0;
        int right=people.size()-1;
        while(left<=right){
            if(people[left]+people[right]<=limit){
                left++;
            }
            right--;
            count++;
        }
        return count;
        
    }
};

// time complexity O(n log n)
// space complexity O(1)

input: people = [3,2,2,1], limit = 3
output: 3