#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
#define os tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define ff first
#define ss second
#define inf 100000000000
 
int main() {
	ll n,m,x,y;
	cin>>n; 
	vector<pair<ll,ll> >v; 
	for(int i=0;i<n;i++)
	cin>>x>>y,v.push_back({x,1LL}),v.push_back({y,-1LL}); 
	sort(v.begin(),v.end()); 
 
	ll maxx = 0,res=0; 
	for(int i=0;i<v.size();i++)
	res+=v[i].ss,maxx = max(maxx,res); 
	cout<<maxx<<endl;
	return 0;
}