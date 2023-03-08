class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> result(size,0);
        int newIndex = size - 1;
        int left = 0;
        int right = size - 1;

        //如果没有相等，那就少了left=right指向同一个数组元素的情况了
        while(left <= right){
            if(nums[left]*nums[left] > nums[right]*nums[right]){
                result[newIndex] = nums[left]*nums[left];
                left++;
            }else{
                result[newIndex] = nums[right]*nums[right];
                right--;
            }
            newIndex--;
        }
        return result;
        
    }
};
