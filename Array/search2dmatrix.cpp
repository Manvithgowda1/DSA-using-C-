class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int right=(m*n)-1;
        int mid;
        while(left<=right){
            mid=(left+right)/2;
            int row = mid / n;
            int col = mid % n;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }

        }
        return false;

    }
};

// time complexity O(log(m*n)) where m is the number of rows and n is the number of columns in the matrix
// space complexity O(1) as we are not using any extra space

input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
output: true