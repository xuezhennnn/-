class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size = nums.size();
        int result = INT_MAX;
        int length = 0;
        int sum = 0;
        int leftIndex = 0;
        for(int i = 0; i < size; i++){
            sum += nums[i];
            while(sum >= target){
                length = i - leftIndex + 1;
                sum -= nums[leftIndex++];
                result = result < length ? result : length;
            }
        }
        return result == INT_MAX ? 0 : result;
    }
};
