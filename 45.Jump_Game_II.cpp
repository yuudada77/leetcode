class Solution {
public:
    int jump(vector<int>& nums) {
        // turn nums into the farthest position reachable from index 0 after passing through the first i positions
        for(int i = 1; i < nums.size(); i++){
            nums[i] = max(nums[i] + i, nums[i - 1]);
        }

        int pos = 0;
        int jump = 0;

        while(pos < nums.size() - 1){
            jump++;
            pos = nums[pos];
        }

        return jump;
    }
};