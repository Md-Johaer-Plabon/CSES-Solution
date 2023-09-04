#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
	ll n, x;
	cin >> n >> x;
	ll dp[x + 5] = { 0 }, a[n + 5];
	dp[0] = 1;
	for (int i = 0; i < n; i++)cin >> a[i];

	for (int j = 0; j < n; j++) {
		for (int i = 1; i <= x; i++) {
			if (i >= a[j] && dp[i - a[j]]) {
				dp[i] += dp[i - a[j]];
				dp[i] %= mod;
			}
		}
		//	cout<<dp[x]<<" -->"<<endl;
	}

	cout << dp[x] << endl;
	return 0;
}