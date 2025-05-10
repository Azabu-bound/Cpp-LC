class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        string x_str = to_string(x);
        int result = 0;

        for (char ch : x_str) {
            int ch_int = ch - '0';
            result += ch_int;
        }

        return x % result == 0 ? result : -1;
    }
};