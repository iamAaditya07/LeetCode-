class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0,c=matrix[0].size()-1;
        int m=matrix.size();
        while(r<m && c>=0){
        if(target==matrix[r][c])
        return true;
        else if(target<matrix[r][c])
        c--;
        else 
        r++;
        }
        return false;
    }
};