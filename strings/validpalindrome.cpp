class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        string result;
        for (char c : s) {
            if (isalnum(c)) { 
                result += tolower(c);
            }
        }
        int j=result.size()-1;
        while(i<j){
            if(result[i]!=result[j]){
                return false;
        }
            i++;
            j--;
        }
        return true;
        
    }
};

// time complexity O(n)
// space complexity O(n)

input: s = "A man, a plan, a canal: Panama"
