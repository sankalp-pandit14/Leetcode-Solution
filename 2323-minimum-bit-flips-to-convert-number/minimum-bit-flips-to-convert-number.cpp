class Solution {
public:
    int minBitFlips(int start, int goal) {
        // string startBinary= '';
        // while(start>1){
        // if( start%2==1 ) startBinary+='1';
        // else{
        //     startBinary+= '0';
        // }
        // start= start/2;
        // }
        // string goalBinary= '';
        // while(goal>1){
        //    if(goal%2==1) goalBinary+= '1';
        //  else{
        //     goalBinary+= '0';
        //  }
        
        // }  it works identically for all bitwise operations. You do not need to convert integers to strings or bits for any of them.
       int ans= start^goal;
       int counter=0;
       while(ans>0){
        counter+= ans&1;
        ans>>=1;
       }
       return counter;
    }
};