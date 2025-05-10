class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();

        int running_sum = nums[0];
        for (int i = 1; i < n; ++i) {
            running_sum += nums[i];
            nums[i] = running_sum;
        }

        return nums;
    }
};