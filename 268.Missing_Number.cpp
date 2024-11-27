class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sum of all numbers 
        int nums_size = nums.size();
        int total = nums_size * (nums_size + 1) / 2;

        // sum of given numbers
        int sum = 0;
        
        //get sum af given numbers
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
            sum += *it;
        }

        // the subtraction result will be the missing number
        return total - sum;
    }
};