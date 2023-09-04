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
	ll n,m,x;
	cin>>n>>m; 
	map<ll,ll>mp; 
	os s;
	for(int i=0;i<n;i++)cin>>x,mp[x]++; 
	for(auto it:mp)s.insert(it.ff);
	s.insert(inf);
	while(m--){
		scanf("%lld",&x); 
		int ind = s.order_of_key(x); 
		if(*s.find_by_order(ind)==x){ 
			mp[x]--;
			if(mp[x]==0)s.erase(x); 
			printf("%lld\n",x);
		}
		else if(ind == 0)puts("-1"); 
		else { 
			ll temp = *s.find_by_order(ind-1);
			mp[temp]--;
			if(mp[temp]==0)s.erase(temp); 
			printf("%lld\n",temp);
		}
	}
	
	return 0;
}