class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int total=0;
        int Lmax=0;
        int Rmax=0;
        int l=0;
       int  r= n-1;
       for(int i=0;i<n;i++){
        if(height[l]<height[r]){
            if(Lmax>height[l]){
                total+= Lmax-height[l];
            }
            else{
                Lmax=height[l];
            
            }l++;
        }
        else{
            if(Rmax>height[r]){
                total+= Rmax-height[r];
            }
            else{
                Rmax=height[r];
                
            }r--;
        }
       }
       return total;
    }
};