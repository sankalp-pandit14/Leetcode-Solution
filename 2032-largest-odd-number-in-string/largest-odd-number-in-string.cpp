class Solution {
public:
    string largestOddNumber(string num) {
        int n= num.size();
       
        for(int i= n-1;i>=0;i--){
        if(num[i]%2==0){
            num.pop_back();
        }else{
            break;
        }
        }
        // int n1= num.size();
        // string anssssssssssssssssssss;
        // string maxi;
        // string maxAns="";
        // for(int i=0;i<n1;i++){
        //     if(num[n1-1]%2!=0){
        //         maxAns=num;
        //     }
        //     else{
        //            if(num[i]%2!=0){
        //             maxi=num[i];
        //             maxAns= max(maxi,maxAns);
        //         }
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     anssssssssssssssssssss+=num[i];
        //     if(num[i]==maxAns){
        //         break;
        //     }
        // }
        // return anssssssssssssssssssss;
        return num;
    }
};