#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
    ll n, x;
    cin >> n;
    string s[n + 5];
    char ch;
    for (int i = 1; i <= n; i++) {
        s[i] += '*';
        for (int j = 1; j <= n; j++)
            cin >> ch, s[i] += ch;
    }

    ll dp[n + 5][n + 5];

    for (int i = 0; i <= n; i++)dp[0][i] = 0;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++)dp[i][j] = 0;
    }
    dp[1][1] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            ((s[i][j] == '.') ? (dp[i][j] += dp[i - 1][j] + dp[i][j - 1]) %= mod : dp[i][j] = 0);

    cout << dp[n][n] << endl;

    return 0;
}