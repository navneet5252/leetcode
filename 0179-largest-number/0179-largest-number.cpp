class Solution {
public:
    static bool mycomp(string s1,string s2){
          string t1 = s1+s2;
        string t2 = s2+s1;
        return t1>t2;
    }
    string compare(string& currString,string a){
        string ret="";
     if((currString+a) > (a+currString)){
         ret = currString+a;
     }
       else{
          ret = a+currString;
        }
        return ret;
    }
    string largestNumber(vector<int>& nums) {
      vector<string>vec;
        for(auto it:nums){
            vec.push_back(to_string(it));
        }
        
        sort(vec.begin(),vec.end(),mycomp);
        if(vec[0]=="0"){
          return "0";
        }
        string currString = vec[0];
        for(int i = 1;i<vec.size();i++){
            currString = compare(currString,vec[i]);
        }
        return currString;
    }
};