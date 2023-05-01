class Solution {
public:
    double average(vector<int>& salary) {
        double mode = (double)pow(10,-5);
        double ans = 0;
        double average=0;
         int maxSalary = INT_MIN;
        for(auto it : salary){
          maxSalary = max(it,maxSalary);
        }
        int minSalary = INT_MAX;
         for(auto it : salary){
          minSalary = min(it,minSalary);
        }
        for(int i=0;i<salary.size();i++){
          ans=(ans+salary[i]);
        }
        ans = ans -maxSalary-minSalary;
        int size=salary.size()-2;
        average = ans/size;
        return average;
        
    }
};