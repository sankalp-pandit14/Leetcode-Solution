class Solution {
public:
    string addStrings(string num1, string num2) {
        int i= num1.size()-1;        // start  from back
        int j= num2.size()-1;
        int carry=0;
        string output="";
        int sum=0;
        int val1=0;
        int val2=0;
        while(i>=0 || j>=0){
            if(i>=0){
             val1= num1[i]-'0';
            }
            else{
            val1=0;
            }
            if(j>=0){
             val2= num2[j]-'0';
            }
            else{
            val2=0;
            }
            sum= carry+val1+val2;
            carry= sum/10;
            sum= sum%10;
            output= to_string(sum)+output;
            i--;
            j--;
        }
        if(carry>0){
            output= to_string(carry)+output;
        }
        return output;
    }
};