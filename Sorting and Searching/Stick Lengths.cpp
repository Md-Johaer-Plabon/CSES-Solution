#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,median,ans;
vector<ll> p;
int main(){
	cin >> n;
	p.resize(n);
	for (ll &x : p){
		cin >> x;
	}
	sort(p.begin(),p.end());
	median=p[n/2];
	for (const ll &x : p){
		ans+=abs(median-x);
	}
	cout << ans << "\n";
	return 0;
}