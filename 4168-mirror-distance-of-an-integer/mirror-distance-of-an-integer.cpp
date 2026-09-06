class Solution {
public:
    int mirrorDistance(int n) {
        int rev_num = 0,a=n;
    while (n > 0) 
    {
        rev_num = rev_num * 10 + n % 10;
        n = n/10;
    }
    return abs(a-rev_num);
        
    }
};