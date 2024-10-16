class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits.at(digits.size() - 1) += 1;

        for(vector<int>::iterator it = digits.end() - 1; it != digits.begin() - 1; --it){
            if(*it >= 10){
                *it -= 10;
                if(it == digits.begin()){
                    digits.emplace(digits.begin(), 1);
                    continue;
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
