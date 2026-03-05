class Solution {
public:
    int minOperations(string s) {
        int operations = 0;

        for(int i = 0; i < s.size(); i++){
            if((s[i] - '0') % 2 != i % 2){
               operations++; 
            }
        }

        operations = (s.size() - operations) > operations ? operations : (s.size() - operations);
        return operations;
    }
};
