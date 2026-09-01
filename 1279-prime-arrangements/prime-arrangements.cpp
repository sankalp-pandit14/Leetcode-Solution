class Solution {
public:
    int numPrimeArrangements(int n) {
        // vector<bool> ans(n,true);
        // int prime=0;
        // int sum=0;
        // isPrime[0] = false;
        // isPrime[1] = false;
        // for(int i = 2; i * i < n; i++) {
        //     if(isPrime[i]) {
        //         for(int j = 2;i*j<=n;j++) {
        //             isPrime[j] = false;
        //         }
        //     }
        // }
        // for(int i=2;i<n;i++){
        //     if(isPrime[i]==true) prime++;
        // }
        // int nonprime=n-prime;
        // sum=                  this is the  naive  approach but for factorial calculation as factorial reaches high than  int due to which we need MOD
//         MOD = 1000000007.

// It simply keeps the answer within a manageable number.
        int MOD = 1000000007;
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = false;
        isPrime[1] = false;

        for(int i = 2; i * i <= n; i++) {
            if(isPrime[i]) {
                for(int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        int prime = 0;
        for(int i = 2; i <= n; i++) {
            if(isPrime[i]) {
                prime++;
            }
        }
        int nonprime = n - prime;
        long long ans1 = 1;
        for(int i = 1; i <= prime; i++) {
            ans1 = ans1 * i % MOD;
        }
        long long ans2 = 1;
        for(int i = 1; i <= nonprime; i++) {
            ans2 = ans2 * i % MOD;
        }
        return (ans1 * ans2) % MOD;
    }
};