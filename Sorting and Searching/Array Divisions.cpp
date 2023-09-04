#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
 
int main() {
    ll n,m; 
    cin>>n>>m; 
    ll a[n+5];
    a[n] = 2e18;
    for(int i=0;i<n;i++)cin>>a[i]; 
    ll left = 1, right = 1e18,minn = 1e18; 
    while(left<=right){
        ll mid = left + (right - left)/2; 
        ll flag = 0,coun = 0,sum = 0; 
        vector<ll>v;
        for(int i=0;i<=n;i++){
            if(sum+a[i]>mid)v.push_back(sum),coun++,sum=0;
            sum += a[i]; 
        } 
        ll maxx=0; 
        for(auto it:v)maxx = max(maxx, it);
        //if(mid == 6)cout<<coun<<" --- "<<endl;
        if(coun == m)right = mid - 1, minn = min(minn, maxx);
        else if(coun<m)right = mid - 1, minn = min(minn, maxx); 
        else left = mid+1;
    }
    cout<<minn<<endl;
}
