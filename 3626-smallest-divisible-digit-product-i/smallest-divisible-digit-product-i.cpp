class Solution {
public:
    int smallestNumber(int n, int t) {
        int mini= INT_MAX;
        for(int i= n;i<n+10;i++){
            int multi=1;
            int c= i;
            while(c!=0){
             int c1=c%10;
             c=c/10;
             multi= c1*multi;
            }
            if(multi%t==0){
                mini = min(mini,i);
            }
        }
        return mini;
    }
};