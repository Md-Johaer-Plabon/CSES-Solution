#include<iostream>
using namespace std; 
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#define ll long long
 
int main() {
	ll n,x; 
	cin>>n>>x; 
	ll a[n+5],sum = 0; 
	map<ll,ll>mp; 
	for(int i=0;i<n;i++)cin>>a[i]; 
	ll coun = 0; 
	mp[0] = 1;
	for(int i=0;i<n;i++){
	  sum+=a[i]; 
	  if(sum>=x && mp[sum-x]>0)coun+=mp[sum-x],mp[sum]++; 
	  else if(sum<=x && mp[sum-x]>0)coun+=mp[sum-x],mp[sum]++;
	  else mp[sum]++;
//	  cout<<sum<<" "<<coun<<" "<<x<<endl;
	}
	cout<<coun<<endl;
}
