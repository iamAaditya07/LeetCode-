class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        int n=nums.size();
        if(n==1)
        return nums[0];
        else
        while(st<=end){
            int mid=st+ (end-st)/2;
            if(mid==0 && nums[0]!=nums[1])
            return nums[0];
            if( mid==n-1 && nums[mid-2]!=nums[mid])
            return nums[mid];
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1] )
            return nums[mid];
            if(mid%2==0){
            if(nums[mid]==nums[mid-1])
            end=mid-1;
            else 
            st=mid+1;
            }
            else{
            if(nums[mid]==nums[mid+1])
            end=mid-1;
            else 
            st=mid+1;
            }
           
        }
        return 0;
    }
};