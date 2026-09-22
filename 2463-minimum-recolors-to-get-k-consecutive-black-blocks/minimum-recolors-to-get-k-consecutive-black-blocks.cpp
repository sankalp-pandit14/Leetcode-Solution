class Solution {
public:
    int minimumRecolors(string blocks, int k) {
         int n= blocks.size();
        int val=k;
         int count=0;
        // int mini= INT_MAX;
        // while(val<=k){
        // if(blocks[val]=='W') count++;
        // val++;

        // }
       int i=0;
       int j=0;
      while(j<n){
        if(blocks[j]=='W') count++;
        if(j-i+1==k) {val= min(val,count);
        if(blocks[i]=='W') {
            count--;
      }
      i++;}
      j++;
      }
      return val;
    }
};