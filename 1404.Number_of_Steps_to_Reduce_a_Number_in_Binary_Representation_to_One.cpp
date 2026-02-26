class Solution {
public:
    void even(string& s){
        // divide by 2 -> shift right = remove the LSB
        s.pop_back();
    }

    void odd(string& s){
        // add one -> deal with the carry
        int index = s.size() - 1;

        while(index >= 0 && s[index] == '1'){
            s[index] = '0';
            index--;
        }

        if(index < 0){
            // add a bit at MSB
            s = '1' + s;
        }
        else{
            s[index] = '1';
        }
    }

    int numSteps(string s) {
        int operations = 0;

        while(s.size() > 1){
            if(s[s.size() - 1] == '0'){
                even(s);
            }
            else{
                odd(s);
            }

            operations++;
        }

        return operations;
    }
};
