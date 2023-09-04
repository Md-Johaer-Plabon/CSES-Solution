#include<iostream>
using namespace std; 
#include<set>
#include<algorithm>
#include<vector>
#include<unordered_map>
#define ll long long
const ll mod = 5e18;
ll a[200005];
int main() {
	ll n,x; 
	cin>>n>>x; 
 
	for(int i=0;i<n;i++)cin>>a[i];
    ll left = 1, right = mod;
    sort(a,a+n);
    ll minn = mod;
    while(left<=right){
        ll mid = left + (right - left)/2;
        long long  sum = 0; 
        for(int i=0;i<n;i++){ 
            sum+=(mid/a[i]); 
            if(sum>x)break;
        }
        if(sum>=x)right = mid - 1, minn = min (minn, mid); 
        else left = mid+1; 
    }
    
    cout<<minn<<endl;
	return 0; 
}