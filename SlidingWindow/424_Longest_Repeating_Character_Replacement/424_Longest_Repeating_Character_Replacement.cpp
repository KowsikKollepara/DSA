class Solution {
public:
    int characterReplacement(string s, int k) {
        int hash[26]={0};
        int l=0,r=0;
        int n=s.length();
        int freq=0;
        int maxi=0;
        while(r<n){
            hash[s[r]-'A']++;
            freq=max(freq,hash[s[r]-'A']);
            int len=(r-l+1);
            if((len-freq)>k){
                hash[s[l]-'A']--;
                l++;
                }
            if((len-freq)<=k){
                maxi=max(maxi,len);
            }
            r++;
            }
            return maxi;
        }
};
