// better one!!
// first sort the vector<string> words
const bool string_comparison(const string& a, const string& b){
    return a.length() > b.length();
}

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), string_comparison);

        unordered_set<string> sub;
        for(int i = 0; i < words.size(); i++){
            for(int j = i + 1; j < words.size(); j++){
                if(words[i].find(words[j]) != string::npos){
                    sub.insert(words[j]);
                }
            }
        }
        return vector<string> (sub.begin(), sub.end());
    }
};

// input string not sorted
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> sub;
        for(string& i : words){
            for(string j : words){
                if(i != j && i.find(j) != string::npos){
                    sub.insert(j);
                }
            }
        }
        return vector<string> (sub.begin(), sub.end());
    }
};