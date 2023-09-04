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
	ll n,x; 
	cin>>n>>x; 
	ll cc;
	map<ll,vector<ll> >mp;
	for(int i=0;i<n;i++)cin>>cc,mp[cc].push_back(i+1); 
	ll flag = 0;
	for(auto it:mp){ 
		
		if(it.ff>=x)break; 
		if(it.ss.size()==0)continue;
		ll temp = x-it.ff; 
		if(temp==it.ff && mp[temp].size()==1)break; 
		else if(temp == it.ff){ 
			flag=1;
			cout<<mp[temp][0]<<" "<<mp[temp][1]<<endl; 
			break;
		}
		else if(mp[temp].size()>0){ 
			flag=1;
			cout<<it.ss[0]<<" "<<mp[temp][0]<<endl; 
			break;
		}
	} 
	if(!flag)puts("IMPOSSIBLE");
	return 0;
}