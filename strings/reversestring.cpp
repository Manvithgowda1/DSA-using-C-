class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
        
    }
};

// time complexity O(n)
// space complexity O(1)

input: s = ["h","e","l","l","o"]
output: ["o","l","l","e","h"]