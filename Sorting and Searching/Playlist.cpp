#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define ff first
#define ss second
const ll h1 = 343;
const ll h2 = 1003;
 
int main (){
	int n;
	cin>>n; 
	map<ll,ll>mp; 
	ll a[n+5];
	int tot = 0;
	vector<int>v;
	for(int i=0;i<n;i++)cin>>a[i];
	int j = 0,maxx = 0 ;
	for(int i=0;i<n;i++){
	    mp[a[i]]++; 
	    tot++;
	    v.push_back(a[i]);
	    if(mp.size()!=tot){
	        for(;j<n;j++){
	                  mp[a[j]]--; 
	                  tot--;
	                  if(mp.size() == tot){ 
	                    if(mp[a[j]]==0)mp.erase(a[j]);
	                    j++;
	                            break;
	                  }
	                  if(mp[a[j]]==0)mp.erase(a[j]);
	                  v.erase(v.begin());
	        }
	    }
	    maxx = max(maxx,tot);
	}
	cout<<maxx<<endl;
return 0;
}