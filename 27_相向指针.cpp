class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        while(left <= right){
            //用左指针找到从左面起不等于val的值
            while(left <= right && nums[left] != val){
                left++;
            }
            //用右指针找到等于val的值
            while(left <= right && nums[right] == val){
                right--;
            }
            if(left < right){
                nums[left++] = nums[right--];
            }
        }
        //在找到最后一个val的值的时候，左指针会跳到下一个
        return left;
    }

};
