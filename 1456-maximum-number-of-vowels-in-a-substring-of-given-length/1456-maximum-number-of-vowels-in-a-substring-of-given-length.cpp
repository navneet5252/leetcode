class Solution {
public:
    int maxVowels(string s, int k) {
        int p1=0,p2=0;
        int vowels =0;
        int ans=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u') vowels++;
            p2++;
        }
        ans=max(ans,vowels);
        for(int i=k;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u') vowels++;
            if(s[p1]=='a' || s[p1]=='e' ||s[p1]=='i' ||s[p1]=='o' ||s[p1]=='u') vowels--;
            p1++;
            ans=max(ans,vowels);
        }
        return ans;
    }
};