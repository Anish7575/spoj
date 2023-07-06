#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	int a, b;
	cin >> a >> b;
	if (b == 0)
		cout << 1 << "\n";
	else {
		b %= 4;
		a %= 10;
		if (b == 0)
			b = 4;
		cout << (long)pow(a, b)%10 << "\n";
	}
}

void preprocess(){}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	preprocess();

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
