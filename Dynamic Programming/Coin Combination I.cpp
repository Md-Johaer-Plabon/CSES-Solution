#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
	ll n, x;
	cin >> n >> x;
	ll coin[n + 5], dp[x + 5]; dp[0] = 1;

	for (int i = 0; i < n; i++)cin >> coin[i];
	for (int i = 1; i <= x; i++)dp[i] = INT_MAX;
	dp[0] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 1; j <= x; j++)
			if (j >= coin[i])dp[j] = min(dp[j], dp[j - coin[i]] + 1);

	if (dp[x] == INT_MAX)puts("-1");
	else
		cout << dp[x] << endl;
	return 0;
}