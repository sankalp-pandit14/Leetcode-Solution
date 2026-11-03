class Solution {
public:
    int firstMatchingIndex(string s) {
        int siz= s.size();
        int i=0;int j= siz-1;
        int ans=-1;
             while(i<=j){
            if(s[i]==s[j]){
             ans=i;
             break;
            }
            i++;j--;
        }
        return ans;
    }
};