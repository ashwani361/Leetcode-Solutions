class Solution {
public:
    int edgeScore(vector<int>& edges) {
        vector<long long> score(edges.size());
        for (int i = 0; i < edges.size(); ++i)
            score[edges[i]] += i;
        return max_element(begin(score), end(score)) - begin(score);
    }
};