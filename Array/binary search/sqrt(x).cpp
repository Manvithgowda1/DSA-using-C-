class Solution {
public:
    int mySqrt(int x) {
        int l=1;
        int e=x;
        while(l<=e){
            int m=(e-l)/2+l;
            if(m>x/m) e=m-1;
            else if(m<x/m) l=m+1;
            else return m;
        }
        return e;
        
    }
};

// time complexity O(logn) where n is the number x
// space complexity O(1) as we are not using any extra space

input: x = 8
output: 2