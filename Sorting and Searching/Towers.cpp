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
	vector<ll>v; 
	ll x;
	ll a[n+5]; 
	for(int i=0;i<n;i++)cin>>a[i]; 
	for(int i=0;i<n;i++){
	          auto it = lower_bound(v.begin(),v.end(),a[i]); 
	          if(it==v.end())v.push_back(a[i]);
	          else { 
	                    if(v[it-v.begin()] == a[i]){
	                         auto it = lower_bound(v.begin(),v.end(),a[i]+1);   
	                         if(it==v.end())v.push_back(a[i]); 
	                         else v[it-v.begin()] = a[i];
	                    }
	                    else v[it-v.begin()] = a[i];
	          }
	}
	cout<<v.size()<<endl;
return 0;
}