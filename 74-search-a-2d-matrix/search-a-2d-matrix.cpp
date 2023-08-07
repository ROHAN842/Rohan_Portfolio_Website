class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int row = matrix.size();
        // int col = matrix[0].size();
        // int l=0, r = (row*col)-1;
        // while(l<=r)
        // {
        //     int mid = l + (r-l)/2;
        //     int Rowelement = mid/col;
        //     int Colelement = mid%col;
        //     if(matrix[Rowelement][Colelement] == target)
        //     return true;
        //     else if(matrix[Rowelement][Colelement] > target)
        //     {
        //         r = mid - 1;
        //     }
        //     else if(matrix[Rowelement][Colelement] < target)
        //     {
        //         l = mid + 1;
        //     }
        // }
        // return false;
        
        // Using StairCase Search Method
            if(target<matrix[0][0] or target>matrix[matrix.size()-1][matrix[0].size()-1])
            {
                return false;
            }
            
            int i=0, j=matrix[0].size()-1;
            
            //Staricase Search
            while(i<=matrix.size()-1 and j>=0)
            {
                if(matrix[i][j] == target)
                {
                    return true;
                }
                
                else if(matrix[i][j] > target)
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
            return false;
    }
};