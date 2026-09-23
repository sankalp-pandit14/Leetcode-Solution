class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mpp(256,-1);
        int n= s.size();
        int r=0,l=0,maxlen=0,len=0;
        while(r<n){
       if(mpp[s[r]]!=-1){
        l = max(l, mpp[s[r]] + 1);
       }
       len=r-l+1;
       maxlen= max(maxlen,len);
       mpp[s[r]]=r;
       r++;
       }
       return maxlen;
    }
};