class Solution {
public:
    int solve(string &s, int i, long long num, int sign)
    {        if(i == s.size())
            return sign * num;
        if(s[i] < '0' || s[i] > '9')
            return sign * num;
        int digit = s[i] - '0';
        if(num > (INT_MAX - digit) / 10)
        {
            if(sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        num = num * 10 + digit;
        return solve(s, i + 1, num, sign);
    }
    int myAtoi(string s)
    {
        int i = 0;
        int n = s.size();
        while(i < n && s[i] == ' ')
            i++;
        if(i == n)
            return 0;
        int sign = 1;

        if(s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(s[i] == '+')
        {
            i++;
        }
        return solve(s, i, 0, sign);
    }
};