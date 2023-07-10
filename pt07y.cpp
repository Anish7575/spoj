#include <bits/stdc++.h>

using namespace std;

int parent(vector<int>&, int);
void solve();
void preprocess();

int find(vector<int>& parent, int x) {
	if (parent[x] == x)
		return x;
	return (parent[x] = find(parent, parent[x]));
}

void solve()
{
	int n, m, src, dst;
	cin >> n >> m;
	vector<int> parent(n), rank(n, 1);
	for (int i = 0; i < n; i++) parent[i] = i;

	for (int i = 0; i < m; i++) {
		cin >> src >> dst;
		src--; dst--;
		int src_parent = find(parent, src);
		int dst_parent = find(parent, dst);
		if (src_parent == dst_parent) {
			cout << "NO\n";
			return;
		}
		if (rank[src_parent] >= rank[dst_parent]) {
			parent[dst_parent] = src_parent;
			rank[src_parent] += rank[dst_parent];
		} else {
			parent[src_parent] = dst_parent;
			rank[dst_parent] += rank[src_parent];
		}
	}
	cout << "YES\n";
}

void preprocess(){}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	preprocess();

	int t = 1;
	//cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
