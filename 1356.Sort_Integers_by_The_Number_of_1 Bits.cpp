class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> result(arr.size());
        for(int i = 0; i < arr.size(); i++){
            result[i].first = arr[i];
            result[i].second = bin(arr[i]);
        }

        sort(result.begin(), result.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            if(a.second != b.second) return a.second < b.second;
            return a.first < b.first;
        });

        vector<int> answer(result.size());
        for(int i = 0; i < result.size(); i++){
            answer[i] = result[i].first;
        }

        return answer;
    }

    int bin(int num){
        int ones = 0;
        while(num > 0){
            ones += num % 2;
            num /= 2;
        }

        return ones;
    }
};
