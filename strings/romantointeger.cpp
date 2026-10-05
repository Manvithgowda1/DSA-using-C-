class Solution {
public:
    int res(int i,string s){
            if(s[i]=='I')return 1;
            if(s[i]=='V')return 5;
            if(s[i]=='X')return 10;
            if(s[i]=='L')return 50;
            if(s[i]=='C')return 100;
            if(s[i]=='D')return 500;
        return 1000;
        }
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int cur=res(i,s);
            int nex=res(i+1,s);
            if(cur<nex & (i+1)<s.length())sum=sum-cur;
            else sum=sum+cur;
        }
        return sum;
    }
};

// time complexity O(n)
// space complexity O(1)

input: s = "MCMXCIV"
output: 1994
