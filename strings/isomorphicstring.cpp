class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp1;
        map<char,char> mp2;

        for(int i=0;i<s.size();i++){
            if(mp1.count(s[i])){
                if(mp1[s[i]]!=t[i]){
                    return false;
                }
            }else{
                mp1[s[i]]=t[i];
            }
            if(mp2.count(t[i])){
                if(mp2[t[i]]!=s[i]){
                    return false;
                }
            }else{
                mp2[t[i]]=s[i];
            }
            
        }
        return true;
        
    }
};

// time complexity O(n)
// space complexity O(n)

input: s = "egg", t = "add"
output: true