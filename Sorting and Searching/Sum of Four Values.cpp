#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
bool cmp(pair<ll,pair<ll,ll> >a, pair<ll,pair<ll,ll> >b){
    if(a.ff == b.ff){
        if(a.ss.ff == b.ss.ff)return a.ss.ss<b.ss.ss;
        else return a.ss.ff<b.ss.ff;
    }
    else return a.ff<b.ff;
 
}
vector<pair<ll,pair<ll,ll> > >v;
 
pair<ll,ll> fun(ll sum,ll i, ll j){
    ll left  = 0,right = v.size()-1;
    ll minn = 1e7;
    while(left<=right){
        ll mid = (left+right)/2;
        if(v[mid].ff<=sum)left = mid+1;
        else right = mid-1;
    }
    if(left == v.size() && v[left-1].ff !=sum)return {-1,-1};
    ll r = left-1;
    left = 0,right = r;
    ll sum1 = sum-1;
    while(left<=right){
        ll mid = (left+right)/2;
        if(v[mid].ff<=sum1)left = mid+1;
        else right = mid-1;
    }
    ll l = left;
     if(l==-1)return{-1,-1};
 
    for(int x=l;x<=r;x++){
     if(v[x].ss.ff!=i && v[x].ss.ss!=j && v[x].ss.ff!=j && v[x].ss.ss!=i)return {v[x].ss.ff,v[x].ss.ss};
    }
 
    return {-1,-1};
}
int main (){
    ll n,x;
    cin>>n>>x;
    ll a[n+5];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        v.push_back({a[i]+a[j],{i,j}});
    }
    sort(v.begin(),v.end(),cmp);
    //for(auto it:v)cout<<it.ff<<" ";
    //cout<<endl;
    int c1=-1,c2=-1,c3=-1,c4=-1;
    for(int i=0;i<v.size();i++){
            if(x >= v[i].ff){
            pair<ll,ll> p1 = fun(x-v[i].ff,v[i].ss.ff,v[i].ss.ss);
            if(p1.ff!=-1){
                c1 = v[i].ss.ff;
                c2 = v[i].ss.ss;
                c3 = p1.ff;
                c4 = p1.ss;
                break;
            }
        }
    }
    if(c1==-1)puts("IMPOSSIBLE");
    else cout<<c1+1<<" "<<c2+1<<" "<<c3+1<<" "<<c4+1<<endl;
}
 