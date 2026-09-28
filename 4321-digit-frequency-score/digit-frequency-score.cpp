class Solution {
public:
    int digitFrequencyScore(int n) {
        int r;
        int c=n;
        int nums[]={0,0,0,0,0,0,0,0,0,0};
        while(c>0)
        {
            r=c%10;
            nums[r]++;
            c=c/10;
        }
        int score=0;
        for(int i=0;i<10;i++){
            if(nums[i]>0){
                score+=(i*nums[i]);
            }
        }
        return score;
    }
};