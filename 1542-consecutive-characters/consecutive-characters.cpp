class Solution {
public:
    int maxPower(string s) {
       vector<int>power;
       int n= s.size();
      
       int right=0;
       int left=0;
       int ans=0;
       int maxi=0;
       for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
         left++;
         
        }
        else{
             ans= left-right+1;
             maxi=max(maxi,ans);
             left++;
             right= left;
        }
       }       
          ans= left-right+1;
             maxi=max(maxi,ans);                      // my one testcase isif n==1 then there is no i+1 so  we will without going to for loop we will do left-right+1 and ofc the max value
       return maxi;
    }
};