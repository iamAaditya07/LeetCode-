class Solution {
public:
    int sum(int n){
        long int sum=0;
        int r;
        while(n>0){
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        return sum;
    }
    int addDigits(int num) {
        
        while(num>=10){
            num=sum(num);
            
        }
    return num;
    }
};