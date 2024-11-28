// better one!!
class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> count(501, 0);
        for(int i = 0; i < arr.size(); i++){
            count[arr[i]]++;
        }
        
        int largest_lucky = 0;
        for(int i = 1; i < count.size(); i++){
            if(i == count[i]){
                largest_lucky = max(largest_lucky, count[i]);
            }
        }

        if(largest_lucky == 0){
            return -1;
        }
        else{
            return largest_lucky;
        }
    }
};

// my solution
class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> count(501, 0);
        for(int i = 0; i < arr.size(); i++){
            count[arr[i]]++;
        }

        vector<int> lucky;
        for(int i = 1; i < count.size(); i++){
            if(i == count[i]){
                lucky.push_back(i);
            }
        }

        if(!lucky.empty()){
            sort(lucky.begin(), lucky.end());
            return *prev(lucky.end());
        }
        else{
            return -1;
        }
    }
};