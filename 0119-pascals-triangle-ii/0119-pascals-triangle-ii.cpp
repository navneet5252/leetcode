class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        ans.push_back(1);
        long long ele=1;
        for(int col=1;col<(rowIndex+1);col++){
          ele= ele*(rowIndex+1-col);
            ele= ele/col;
            ans.push_back(ele);
        }
        return ans;
    }
};