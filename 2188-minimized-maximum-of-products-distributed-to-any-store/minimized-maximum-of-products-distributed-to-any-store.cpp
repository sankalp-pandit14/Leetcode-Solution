class Solution {
public:
    int maxElement(vector<int>& quantities){
        int  maxi= INT_MIN;
        int n= quantities.size();
        for(int i=0;i<n;i++){
            maxi= max(quantities[i],maxi);
        }
        return maxi;
    }
    int stores( vector<int>& quantities,int v){
        int n= quantities.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=ceil((double)quantities[i]/(double)v);
        }
        return totalSum;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1, high= maxElement(quantities);
        int ans=0;
        while(low<=high){
            int mid= (low+high)/2;
            int value= stores(quantities,mid);
            if(value<=n){
           ans=mid;
           high= mid-1;
            }
            else{
                low= mid+1;
            }
        }
      return ans;
    }
};