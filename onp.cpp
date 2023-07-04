#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	string s;
	cin >> s;

	stack<string> op;
	stack<char> sy;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			string ch = "";
			ch += s[i];
			op.push(ch);
		} else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
			sy.push(s[i]);
		} else if (s[i] == ')') {
			string a = op.top();
			op.pop();
			string b = op.top();
			op.pop();
			op.push(b + a + sy.top());
			sy.pop();
		}
	}
	cout << op.top() << "\n";
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
