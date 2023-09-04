#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ff first
#define ss second
int main(){
    ll n;
    cin>>n;
    pair<ll,pair<ll,ll> >p[n+5];
    map<ll,ll>mp;
    map<ll,ll>::iterator tr;
    p[0]={0,{0,0}};
    for(int i=1;i<=n;i++){
       cin>>p[i].ss.ff>>p[i].ff>>p[i].ss.ss;
    }
    sort(p+1,p+n+1);
    vector<ll>v;
    vector<ll>::iterator it;

    for(int i=1;i<=n;i++){
        it = lower_bound(v.begin(),v.end(), p[i].ss.ff);
        if(v.size()==0)mp[p[i].ff]=p[i].ss.ss;
        else if(it==v.end())it--, mp[p[i].ff] = max(p[i].ss.ss+mp[*it], max(mp[p[i].ff], mp[p[i-1].ff]));
        else if(it==v.begin())mp[p[i].ff] = max(mp[p[i-1].ff],p[i].ss.ss);
        else it--, mp[p[i].ff] = max(p[i].ss.ss+mp[*it], max(mp[p[i].ff], mp[p[i-1].ff]));
        v.push_back(p[i].ff);
    }
    ll maxx=0;
    for(tr=mp.begin();tr!=mp.end();tr++)maxx=max(maxx, tr->ss);
    cout<<maxx<<endl;
return 0;
}
