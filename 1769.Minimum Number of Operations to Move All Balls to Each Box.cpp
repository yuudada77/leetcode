class Solution {
public:
    vector<int> minOperations(string boxes) {
        int box_num = boxes.length();
        vector<int> operations(box_num, 0);

        // left to right
        int prefixBall = 0;
        int prefixOperations = 0;

        for(int i = 0; i < box_num; i++){
            prefixOperations += prefixBall;
            operations[i] += prefixOperations;
            if(boxes[i] == '1'){
                prefixBall++;
            }
        }

        // right to left
        int suffixBall = 0;
        int suffixOperations = 0;

        for(int i = box_num- 1; i >= 0; i--){
            suffixOperations += suffixBall;
            operations[i] += suffixOperations;
            if(boxes[i] == '1'){
                suffixBall++;
            }
        }

        return operations;
    }
};