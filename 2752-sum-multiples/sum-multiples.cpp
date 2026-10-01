class Solution {
public:
    long long sum(int n, int k) {
        int m = n / k;
        return 1LL * k * m * (m + 1) / 2;
    }

    int sumOfMultiples(int n) {
        return sum(n, 3) + sum(n, 5) + sum(n, 7)
             - sum(n, 15) - sum(n, 21) - sum(n, 35)
             + sum(n, 105);
    }
};