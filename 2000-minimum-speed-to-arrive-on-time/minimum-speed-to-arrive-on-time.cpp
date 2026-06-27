class Solution {
public:
    //  int maxElement(vector<int>& dist){
    //     int  maxi= INT_MIN;
    //     int n= dist.size();
    //     for(int i=0;i<n;i++){
    //         maxi= max(dist[i],maxi);
    //     }
    //     return maxi;
    // }
    double distance(vector<int>& dist, int v){
        int n= dist.size();
        double totalHour = 0;
        for(int i=0;i<n-1;i++){
            totalHour+=ceil((double)dist[i]/v); // cannot do the ceil at last one see the example 2 absoultely correct
        }
        totalHour+=(double)dist[n-1]/v;
        return totalHour;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low=1,high= high = 10000000;
        int ans=0;
        int  n= dist.size();
        if(ceil(hour)<n){
            return -1;
        }
        while(low<=high){
            int mid=(low+high)/2;
            double value= distance(dist,mid);
            if(value<= hour){
                ans= mid;
                high=mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return  ans;
    }
};