class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>vec;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                   vec.push_back({i,j});
                }
            }
            
        }
        int i =0;
        while(i<vec.size()){
           int row_no = vec[i].first;
            for(int col = 0;col<matrix[0].size();col++){
                matrix[row_no][col]=0;
            }
            int col_no = vec[i].second;
            for(int r=0;r<matrix.size();r++){
              matrix[r][col_no]=0;
            }
            i++;
        }
    }
};