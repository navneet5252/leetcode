class Solution {
public:
    int maxVowels(string s, int k) {
        int vowels =0;
        int ans=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u') vowels++;
        }
        ans=max(ans,vowels);
        for(int i=k;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u') vowels++;
            if(s[i-k]=='a' || s[i-k]=='e' ||s[i-k]=='i' ||s[i-k]=='o' ||s[i-k]=='u') vowels--;
            ans=max(ans,vowels);
        }
        return ans;
    }
};