class Solution {
public:
    const int dx[4] = {-1, 1, 0, 0};
    const int dy[4] = {0, 0, -1, 1};

    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        int row = grid.size();
        int col = grid[0].size();
        int points = 0;
        vector<int> answer(queries.size(), 0);

        // sort the queries to enhance efficiency
        vector<pair<int, int>> sortedQueries;
        for(int i = 0; i < queries.size(); i++){
            sortedQueries.emplace_back(queries[i], i);
        }
        sort(sortedQueries.begin(), sortedQueries.end());

        // each grid is visited or not
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        // grids can be visited
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;

        // initialize
        visited[0][0] = true;
        pq.emplace(grid[0][0], make_pair(0, 0));

        // traveersal query
        for(auto& q : sortedQueries){
            int value = q.first;
            int index = q.second;

            while(!pq.empty() && pq.top().first < value){
                auto [value, pos] = pq.top();
                pq.pop();
                
                int x = pos.first;
                int y = pos.second;

                points++;

                for (int i = 0; i < 4; ++i) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if (nx >= 0 && nx < row && ny >= 0 && ny < col && !visited[nx][ny]) {
                        visited[nx][ny] = true;
                        pq.emplace(grid[nx][ny], make_pair(nx, ny));
                    }
                }
            }

            answer[index] = points;
        }
        return answer;
    }
};