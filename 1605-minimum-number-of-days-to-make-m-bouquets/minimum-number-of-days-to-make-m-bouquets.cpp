class Solution {
public:
 int maxElement(vector<int>& bloomDay){
        int  maxi= INT_MIN;
        int n= bloomDay.size();
        for(int i=0;i<n;i++){
            maxi= max(bloomDay[i],maxi);
        }
        return maxi;
    }
    int bloom(vector<int>& bloomDay,int v,int c,int b){
        int n= bloomDay.size();
        int count=0;
        int bouquets=0;
        for(int i=0;i<n;i++){
            if(v>=bloomDay[i]){
                count++;
                if(count==c){
                    bouquets++;
                    count=0;
                    if(bouquets==b){
                        break;
                    }
                }
            }
            else{
                count=0;
            }
        }
        return bouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int high= maxElement(bloomDay);
        long long product= (1LL*m*k); // for overflow in product multiply with LL 
        int n= bloomDay.size();
        if(n<product) return -1;
        int low=1;
        int ans=0;
        while(low<=high){
            int mid= low+(high-low)/2;
            int value= bloom(bloomDay,mid,k,m);
            if(value>=m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};