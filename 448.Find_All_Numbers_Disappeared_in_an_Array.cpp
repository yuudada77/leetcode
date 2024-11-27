// better one!!
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // if n exits in nums, mark by turning nums[n - 1] into negative
        // e.g. 7 exits in nums, then nums[7 - 1] = nums[6] = -nums[6]
        for(int i = 0; i < nums.size(); i++){
            int current = nums[i];
            nums[abs(current) - 1] = -abs(nums[abs(current) - 1]);  
        }

        vector<int> output;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                output.push_back(i + 1);
            }
        }
        return output;
    }
};

// my solution
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> integers;
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
            integers.insert(*it);
        }

        vector<int> output;
        for(int i = 1; i <= nums.size(); i++){
            if(integers.find(i) == integers.end()){
                output.push_back(i);
            }
        }
        return output;
    }
};