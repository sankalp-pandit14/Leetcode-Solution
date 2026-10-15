class Solution {
public:
    int countHomogenous(string s) {
        int n= s.size();
        long long count = 1;
        long long total = 1;
        int mod = 1e9 + 7;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                count=1;
            }
            total= (total+count)%mod;
        }
        return total;
    }
};