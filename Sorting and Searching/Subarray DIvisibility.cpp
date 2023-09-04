#include<iostream>
using namespace std; 
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#define ll long long
const ll mod = 5e18;
ll a[200005];
int main() {
	ll n,x; 
	cin>>n; 
 
	for(int i=0;i<n;i++)cin>>a[i];
    map<ll,ll>mp; 
    ll sum = 0,coun=0;
    mp[0] = 1;
    for(int i=0;i<n;i++){
        sum+=a[i]; 
        if(sum<0){
            ll cc = abs(sum); 
            cc/=n; 
            sum+=(cc+1)*n;
        }
        coun += mp[sum%n]; 
       // cout<<a[i]<<" "<<coun<<endl;
        mp[sum%n]++;
    }
    cout<<coun<<endl;
	return 0; 
}
