class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for(vector<int>::iterator right = nums.begin(); right != nums.end(); ++right){
            if(*right != 0){
                // swap() is in algorithm
                swap(*right, nums[left]);
                left++;
            }
        }
    }
};