class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> freq;
        
        for(int i = 0; i < s.size(); i++){
            freq[s[i]]++;
        }

        int final_len = 0; 
        for(auto& c : freq){
            if(c.second % 2 == 0){
                final_len += 2;
            }
            else{
                final_len += 1;
            }
        }

        return final_len;
    }
};