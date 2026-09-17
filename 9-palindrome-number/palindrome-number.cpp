class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int r,c=x;
        while(c>0){
            r=c%10;
            rev=rev*10 +r;
            c=c/10;
        }
        if(x>=0){
            if(rev==x) return true;
            else return false;
        }
        else return false;
        
    }
};