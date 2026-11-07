class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        int low=0;
        int high=rows*columns-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int r=mid/columns;
            int c=mid%columns;
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]<target){
                 low=mid+1;

            }
            else{
               
                high=mid-1;
            }

        }
        return false;
    }
};