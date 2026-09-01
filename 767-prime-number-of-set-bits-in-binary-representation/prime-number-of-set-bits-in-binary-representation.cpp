class Solution {
public:

    bool isPrime(int n) {
        if(n <= 1) return false;

        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                return false;
            }
        }

        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int count1 = 0;

        for(int i = left; i <= right; i++) {

            int temp = i;
            int count = 0;

            while(temp != 0) {
                temp = temp & (temp - 1);
                count++;
            }

            if(isPrime(count)) {
                count1++;
            }
        }

        return count1;
    }
};