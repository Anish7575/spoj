#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	int n;
	string s;
	while (true) {
		cin >> n;
		if (n == 0)
			break;
		cin >> s;
		int f = 2*n - 1, l = 1;
		string res = "";
		for (int i = 0; i < n; i++) {
			int idx = i;
			bool op = true;
			while (idx < s.length()) {
				res += s[idx];
				(op) ? idx += f : idx += l;
				op = !op;
			}
			f -= 2; l += 2;
		}
		cout << res << "\n";
	}
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
