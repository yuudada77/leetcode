class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        //  convert the given range in a container to a heap
        make_heap(gifts.begin(), gifts.end());

        // x -> record gifts.back()
        int x = INT_MAX;
        while(k > 0 && x > 1){
            pop_heap(gifts.begin(), gifts.end());
            x = gifts.back();
            gifts.back() = sqrt(gifts.back());
            push_heap(gifts.begin(), gifts.end());
            k--;
        }
        // 0LL -> long long zero
        return accumulate(gifts.begin(), gifts.end(), 0LL);
    }
};