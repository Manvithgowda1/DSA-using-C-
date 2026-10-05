class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        int j;
        for(int i=0;i<strs.size();i++){
            for(j=0;j<strs[i].size();j++){
                if(res[j]!=strs[i][j]){
                    break;
                }
            }
            res=res.substr(0,j);
        }
        return res;
    }
};

// time complexity O(n*m) where n is the number of strings and m is the length of the shortest string
// space complexity O(1)

input: strs = ["flower","flow","flight"]    
output: "fl"