class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        for(int i=0;i<s.size();i++){
            if(!res.empty()&&s[i]==')'&& res.top()=='('){
                res.pop();
            }
            else if(!res.empty()&&s[i]==']'&& res.top()=='['){
                res.pop();
            }
            else if(!res.empty()&&s[i]=='}'&& res.top()=='{'){
                res.pop();
            }
            else
                res.push(s[i]);
            
        }
        if(res.empty()){
            return true;
        }
        else
            return false;
        
    }
};

// time complexity O(n) where n is the number of elements in the string
// space complexity O(n) as we are using a stack to store the characters

input: s = "()[]{}"
output: true