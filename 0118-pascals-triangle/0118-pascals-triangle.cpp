class Solution {
public:
    vector<int>nthrow(int row){
        long long ans=1;
        vector<int>vec;
        vec.push_back(1);
        for(int i=1;i<row;i++){
            ans = ans * (row-i);
            ans=ans/(i);
            vec.push_back(ans);
        }
        return vec;
    }
    vector<vector<int>> generate(int N) {
      vector<vector<int>>ans;
        for(int i=1;i<=N;i++){
          ans.push_back(nthrow(i));
        }
        return ans;
    }
};