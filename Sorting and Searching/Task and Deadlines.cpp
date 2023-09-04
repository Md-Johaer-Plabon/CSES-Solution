#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
 
int main (){
    ll n,x;
    cin>>n;
    pair<ll,ll>p[n+5];
    for(int i=0;i<n;i++)cin>>p[i].ff>>p[i].ss;
    ll res = 0,tm = 0;
    sort(p,p+n);
    for(int i=0;i<n;i++){
        tm+=p[i].ff;
        res += (p[i].ss - tm);
    }
    cout<<res<<endl;
}