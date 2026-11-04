class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

// time complexity O(n) where n is the number of elements in the array
// space complexity O(1) as we are not using any extra space

input: digits = [1,2,3]
output: [1,2,4]