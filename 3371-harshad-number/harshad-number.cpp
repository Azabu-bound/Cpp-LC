class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        string x_str = to_string(x);

        int sum = accumulate(x_str.begin(), x_str.end(), 0,
                            [](int acc, char ch) { return acc + (ch - '0');});

        return x % sum == 0 ? sum : -1;
    }
};