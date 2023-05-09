class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>vec;
        int row_start = 0;
        int col_start =  0;
        int row_end = matrix.size()-1;
        int col_end = matrix[0].size()-1;
        while(row_start<=row_end && col_start<=col_end){
            for(int i = col_start;i<=col_end;i++){
               vec.push_back(matrix[row_start][i]);
            }
            row_start++;
            if(row_start>row_end || col_start>col_end){
                break;
            }
             for(int j = row_start;j<=row_end;j++){
               vec.push_back(matrix[j][col_end]);
            }
            col_end--;
             if(row_start>row_end || col_start>col_end){
                break;
            }
             for(int i = col_end;i>=col_start;i--){
               vec.push_back(matrix[row_end][i]);
            }
            row_end--;
             if(row_start>row_end || col_start>col_end){
                break;
            }
            for(int j = row_end;j>=row_start;j--){
                vec.push_back(matrix[j][col_start]);
            }
            col_start++;
             if(row_start>row_end || col_start>col_end){
                break;
            }
        }
        return vec;
    }
};