class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftsum(n,0);
        vector<int> rightsum(n,0);
        for(int i=1;i<n;i++){
            leftsum[i]=leftsum[i-1]+nums[i-1];
        }
        for(int j=n-2;j>=0;j--){
            rightsum[j]=rightsum[j+1]+nums[j+1];
        }
        vector<int>answer(n,0);
        for(int k=0;k<n;k++){
            answer[k]=abs(rightsum[k]-leftsum[k]);
        }
        return answer;
    }
};