class Solution {
public:
    int differenceOfSums(int n, int m) {
        int d;
        for(int i=1;i<=n;i++){
            if(i%m==0)
            d=d-i;
            else
            d=d+i;
        }
        return (d);
        
    }
};