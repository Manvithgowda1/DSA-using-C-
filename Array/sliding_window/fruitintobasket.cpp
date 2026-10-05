class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        int left=0;
        unordered_map<int,int> m;
        for(int right=0;right<fruits.size();right++){
            m[fruits[right]]++;
            while(m.size()>2){
                m[fruits[left]]--;
                if(m[fruits[left]]==0){
                    m.erase(fruits[left]);
                }
                left++;
            }
            ans=max(ans,right-left+1);

        }
        return ans;
    }
};

// time complexity O(n)
// space complexity O(1) (at most 2 types of fruits in the map)

input: fruits = [1,2,1]
output: 3