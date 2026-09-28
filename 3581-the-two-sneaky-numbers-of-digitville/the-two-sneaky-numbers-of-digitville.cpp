class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n,0);
       vector<int>ans;
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
            if(arr[nums[i]]==2)
            ans.push_back(nums[i]);
        }
        return ans;
    }
};