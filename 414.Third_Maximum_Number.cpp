class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        
        int maximum = 1;
        for(vector<int>::iterator it = nums.begin(); it != prev(nums.end()); ++it){
            if(*it != *(it + 1)){
                maximum++;
            }
            if(maximum == 3){
                return *(it + 1);
            }
        }
        return nums.at(0);
    }
};