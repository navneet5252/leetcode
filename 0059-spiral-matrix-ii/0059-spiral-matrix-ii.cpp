class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>vec(n,vector<int>(n));
        int row_start = 0;
        int row_end = vec.size()-1;
        int col_start = 0;
        int col_end= vec[0].size()-1;
        int count =1;
        while(row_start<=row_end && col_start<= col_end){
            // -----------------------------
            for(int i = col_start;i<=col_end;i++){
                vec[row_start][i]=count++;
            }
            row_start++;
            if(row_start>row_end || col_start>col_end){
                break;
            }
            // ----------------------------
             for(int i = row_start;i<=row_end;i++){
                vec[i][col_end]=count++;
            }
            col_end--;
             if(row_start>row_end || col_start>col_end){
                break;
            }
            // --------------------------------
            for(int j = col_end;j>=col_start;j--){
                vec[row_end][j]=count++;
            }
            row_end--;
             if(row_start>row_end || col_start>col_end){
                break;
            }
            // ---------------------------------
            for(int j = row_end;j>=row_start;j--){
                vec[j][col_start]=count++;
            }
            col_start++;
             if(row_start>row_end || col_start>col_end){
                break;
            }
            // -----------------------------
        }
        return vec;
    }
};