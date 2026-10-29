
class Solution {
public:
    int reverse(int x) {
        long long rev = 0;

        while (x != 0) {
            int r = x % 10;
            x /= 10;

            rev = rev * 10 + r;

            if (rev > INT_MAX || rev < INT_MIN)
                return 0;
        }

        return (int)rev;
    }
};
