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
	cin>>n;
	ll a[n+5],sum=0,maxx=INT_MIN,b[n+5]; 
	for(int i=0;i<n;i++)cin>>a[i],b[i]=a[i];
	sort(b,b+n); 
	if(b[n-1]<0){
		cout<<b[n-1]<<endl;return 0;
	}
	for(int i=0;i<n;i++){
		sum+=a[i]; 
		if(sum<0)sum=0; 
		maxx = max(maxx,sum);
	} 
	cout<<maxx<<endl;
	return 0;
}