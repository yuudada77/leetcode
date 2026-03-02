class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int> maxRight(grid.size(), -1);
        for(int i = 0; i < grid.size(); i++){
            for(int j = grid[i].size() - 1; j >= 0; j--){
                if(grid[i][j] == 1){
                    maxRight[i] = j;
                    break;
                }
            }
        }

        int steps = 0;
        // each row i must satisfy maxRight <= i
        for(int i = 0; i < maxRight.size(); i++){
            int j = i;

            // find the row that can be row i
            while(j < maxRight.size() && maxRight[j] > i){
                j++;
            }
            
            // can't find -> invalid
            if(j == maxRight.size()){
                return -1;
            }

            // swap adjacent rows from j to i
            while(j > i){
                swap(maxRight[j], maxRight[j - 1]);
                j--;
                steps++;
            }
        }

        return steps;
    }
};
