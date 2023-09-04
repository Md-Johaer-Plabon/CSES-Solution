#include<iostream>
using namespace std; 
#include<set>
#include<algorithm>
#include<vector>
#include<unordered_map>
#define ll long long
ll a[10000];
int main() {
	ll n,x; 
	cin>>n>>x; 
	ll sum = 0,b[n+5]; 
	unordered_map<ll,ll>mp; 
	for(int i=0;i<n;i++)cin>>a[i],mp[a[i]]++,b[i] = a[i]; 
	sort(a,a+n);
	int x1=-1,y1=-1,z1=-1;
	for(int i=0;i<n;i++){
	    int flag = 0;
	    if(a[i]>x)break;
	  if(a[i]<=x){
	    ll temp = x - a[i]; 
	    for(int j=i+1;j<n;j++){
	      //if(i==j)continue; 
	      if(a[j]>temp)break;
 
          int ind = lower_bound(a,a+n,temp-a[j]) - a; 
	      if(a[j] == temp - a[j] && ind<n && a[ind]==a[j] && a[ind+1] == a[j]){
	        x1 = a[i], y1 = z1 = a[j];
	        flag = 1;
	        break;
	      }
	      else if(a[ind] == temp-a[j]){
	        x1 = a[i], y1 = temp-a[j], z1 = a[j];
	        flag = 1;
	        break;
	      }
	    }
	  }
	    if(flag)break;
	}
	vector<int>v;
	for(int i=0;i<n;i++){
	  if(b[i]==x1)v.push_back(i+1),x1 = -1; 
	  else if(b[i]==y1)v.push_back(i+1),y1 = -1; 
	  else if(b[i]==z1)v.push_back(i+1),z1 = -1; 
	  
	}
	
	if(v.size()!=3)puts("IMPOSSIBLE"); 
	else for(auto it:v)cout<<it<<" ";
	return 0;
}