class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = (int)nums.size();
        int balanced = 1;
        int j = 0;

        for(int i = 0; i < n; i++){
            if(j < i){
                j = i;
            }

            while(j < n && 1LL * nums[i] * k >= nums[j]){
                j++;
            }

            balanced = max(balanced, j - i);
        }

        return n - balanced;
    }
};
