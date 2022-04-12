// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	struct edge{
	int a, b, cost;
};
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
		vector<edge>Edges;
		for(auto i: edges){
			edge p;
			p.a = i[0];
			p.b = i[1];
			p.cost = i[2];
			Edges.push_back(p);
		}
		int INF = INT_MAX;
	    vector<int> d(n);
	    vector<int> p(n, -1);
	    int x;
	    for (int i = 0; i < n; ++i) {
	        x = -1;
	        for (edge e : Edges) {
	            if (d[e.a] + e.cost < d[e.b]) {
	                d[e.b] = d[e.a] + e.cost;
	                p[e.b] = e.a;
	                x = e.b;
	            }
	        }
	    }
	    if(x == -1)return 0;
	    return 1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends