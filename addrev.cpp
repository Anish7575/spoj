#include <bits/stdc++.h>

using namespace std;

void solve()
{
	string n1, n2;
	cin >> n1 >> n2;
	reverse(n1.begin(), n1.end());
	reverse(n2.begin(), n2.end());

	string res = to_string(stoi(n1) + stoi(n2));
	reverse(res.begin(), res.end());
	cout << stoi(res) << "\n";

}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
