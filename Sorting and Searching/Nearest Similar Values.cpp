#include<iostream>
using namespace std; 
#include<set>
#include<algorithm>
#include<vector>
#include<unordered_map>
#define ll long long
#define ff first
#define ss second
const ll mod = 5e18;
ll a[200005];
int main() {
	ll n,x; 
	cin>>n; 
 
	for(int i=0;i<n;i++)cin>>a[i];
    vector<pair<ll,ll> >v;
    cout<<0<<" "; 
    v.push_back({a[0],0});
    for(int i=1;i<n;i++){
        if(a[i]>v[v.size()-1].ff)cout<<v[v.size()-1].ss+1<<" ",v.push_back({a[i],i}); 
        else {
           
            auto it = v.end(); 
            it--;
            while(v.size() && v[it-v.begin()].ff>=a[i])v.erase(it),it = v.end(),it--;
            if(v.size()==0)cout<<0<<" "; 
            else cout<<v[v.size()-1].ss+1<<" "; 
            
            v.push_back({a[i],i});
        }
        
    }
	return 0; 
}
