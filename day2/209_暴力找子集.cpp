class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT_MAX;
        int length = 0;
        int sum = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            sum = 0;
            for(int j = i; j < size; j++){
                sum += nums[j];
                if(sum >= target){
                    length = j - i + 1;
                    result = result < length ? result : length; //把result的初始值设成一个相对较大的数，这样第一次赋值一定是length
                    break;
                }
            }
        }
        return result == INT_MAX ? 0 : result;
    }
};
