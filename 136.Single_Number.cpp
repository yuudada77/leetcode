class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // 因為每個 integer 只出現一次或兩次
        // 而做 bitwise XOR 運算時，出現兩次的會互相抵消
        // 因此對 nums 中所有 integer 做完 bitwise XOR 後的結果會是只出現一次的那個 integer
        int check = 0;
        for (int n : nums) {
            check ^= n;
        }
        return check;
    }
};
