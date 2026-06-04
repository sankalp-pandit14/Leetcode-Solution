// x = right - left
// y = up - down
class Solution {
public:
    bool judgeCircle(string moves) {
        int n= moves.size();
        int sum=0;
        int sum1=0;
        if(n%2!=0){
            return false;
        }
        for(int i=0;i<n;i++){
            if(moves[i]=='U' ){
                sum++;
            }
            else if(moves[i]=='R'){
                sum1++;
            }
            else if(moves[i]=='D' ){
                sum--;
            }
            else{
                sum1--;
            }
        }
        if(sum==0 && sum1==0){
            return true;
        }
        else{
            return false;
        }
    }
};