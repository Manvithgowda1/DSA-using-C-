class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> m(26,0);
        for(int i=0;i<s.size();i++){
            m[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};

// time complexity O(n) where n is the number of characters in the string
// space complexity O(1) as we are using a vector of fixed size 26 to

input: s = "leetcode"
output: 0