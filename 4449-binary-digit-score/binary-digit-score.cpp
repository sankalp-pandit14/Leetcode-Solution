class Solution {
public:
    int calculateScore(int a, int b) {
        string s1 = "";
        string s2 = "";

        if(a == 0) s1 = "0";
        if(b == 0) s2 = "0";

        while(a != 0) {
            s1 = char('0' + a % 2) + s1;
            a = a / 2;
        }

        while(b != 0) {
            s2 = char('0' + b % 2) + s2;
            b = b / 2;
        }

        int n = s1.size();
        int p = s2.size();

        int c = 0, v = 0;

        for(int i = 0; i < n; i++) {
            if(s1[i] != '0') c++;
        }

        for(int i = 0; i < p; i++) {
            if(s2[i] != '0') v++;
        }

        if(c >= v) return c * v;

        if(c == 0) return 0;

        return v / c;
    }
};