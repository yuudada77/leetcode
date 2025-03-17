class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(auto it = nums.begin(); it != nums.end(); ++it){
            int another = target - *it;
            auto it2 = find(it + 1, nums.end(), another);

            if(it2 != nums.end()){
                return {distance(nums.begin(), it), distance(nums.begin(), it2)};
            }
        }
        return {};
    }
};