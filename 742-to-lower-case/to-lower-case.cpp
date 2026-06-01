class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        string op;

        for(int i = 0; i < n; i++) {
            int ascii = s[i];

            if(ascii >= 65 && ascii <= 90) {
                ascii += 32;
                char letter = ascii;
                op += letter;
            }
            else {
                op += s[i];
            }
        }

        return op;
    }
};