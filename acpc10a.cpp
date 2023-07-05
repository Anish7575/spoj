#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	int a, b, c;
	while (true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		if (b - a == c - b) {
			cout << "AP " << c + (b - a) << "\n";
		} else {
			cout << "GP " << c * (b/a) << "\n";
		}
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
