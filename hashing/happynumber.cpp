class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> sum;
        int hash[10];
        int temp=0;
        sum.insert(n);
        string s=to_string(n);
        for(int i=0;i<10;i++){
            hash[i]=i*i;
        }
        if(n==1){
            return true;
        }
        while(temp!=1){
            temp=0;
            for(int i=0;i<s.size();i++){
                temp+=hash[s[i]-'0'];
            }
            if(sum.find(temp)!=sum.end()){
                return false;
            }
            sum.insert(temp);
            s=to_string(temp);
            
        }
        return true;
    }
};

// time complexity O(log n) where n is the input number
// space complexity O(log n) where n is the input number

input: n = 19
output: true