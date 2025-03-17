class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits.at(digits.size() - 1) += 1;

        for(vector<int>::iterator it = digits.end() - 1; it != digits.begin() - 1; it--){
            if(*it >= 10){
                *it -= 10;
                if(it == digits.begin()){
                    digits.emplace(digits.begin(), 1);
                    // 沒有 break 的話可能會在下一輪迴圈使用 it -1 造成越界讀取
                    break;
                }
                *(it - 1) += 1; 
            }
            else{
                break;
            }
        }
        return digits;
    }
};