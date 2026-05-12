class Solution {
public:
    bool isHappy(int n) {

        int happynum = 0;

        while(n != 1) {

            happynum = 0;

            while(n > 0) {

                int rem = n % 10;

                happynum += pow(rem,2);

                n = n / 10;
            }

            if(happynum == 4) { //why coz 4 is not a happy number if it comes
                return false;
            }

            n = happynum;
        }

        return true;
    }
};