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
	pair<ll,ll>p[n+5];
	p[0].ff = p[0].ss = 0;
	for(int i=1;i<=n;i++)cin>>p[i].ss>>p[i].ff; 
	
	sort(p+1,p+n+1); 
 
	ll start = 0, endd = 0, coun = 0; 
	
	for(int i=1;i<=n;i++){
		if(p[i].ss>=endd)coun++,endd = p[i].ff;
	}
	cout<<coun<<endl;
	return 0;
}