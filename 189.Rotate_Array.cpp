class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        
        vector<int> right(nums.begin() + (nums.size() - k), nums.end());
        vector<int> left(nums.begin(), nums.begin() + (nums.size() - k));

        nums = right;
        nums.insert(nums.end(), left.begin(), left.end());
    }
};
