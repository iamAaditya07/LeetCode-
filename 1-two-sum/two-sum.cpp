class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int>> arr;

        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int st = 0;
        int l = arr.size() - 1;

        while (st < l) {
            int sum = arr[st].first + arr[l].first;

            if (sum == target) {
                return {arr[st].second, arr[l].second};
            }
            else if (sum < target) {
                st++;
            }
            else {
                l--;
            }
        }

        return {};
    }
};