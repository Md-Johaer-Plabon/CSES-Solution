#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
	ll n, x;
	cin >> n;
	ll dp[n + 5] = { 0 };
	dp[n] = 1;

	queue<pair<int, int> >q;
	q.push({ n,0 });

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if (x == 0) {
			cout << y << endl; return 0;
		}
		int temp = x;
		vector<int>dig;
		while (temp)dig.push_back(temp % 10), temp /= 10;

		for (int i = 0; i < dig.size(); i++) {
			if (dp[x - dig[i]] == 0)q.push({ x - dig[i],y + 1 }), dp[x - dig[i]] = 1;
		}
	}

	return 0;
}