#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ff first
#define ss second
using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
int main (){
    ordered_set s;
    ll x, n;
    cin>>n>>x;
    map<ll,ll>mp;
    ll a[n+5];
    vector<pair<ll,ll> >v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        v.push_back({a[i],mp[a[i]]});
    }
    for(int i=0;i<x;i++)s.insert(v[i]);
    if(x%2){
        ll ind = x/2;
        auto [p,q] = *s.find_by_order(ind);
        cout<<p<<" ";
        int j = 0;
        for(int i=x;i<n;i++){
            s.erase({v[j].ff,v[j].ss});
            s.insert(v[i]);
            j++;
            auto [p,q] = *s.find_by_order(ind);
            cout<<p<<" ";
        }
    }
 
    else{
        ll ind = x/2-1;
        auto [p,q] = *s.find_by_order(ind);
        cout<<p<<" ";
        int j = 0;
        for(int i=x;i<n;i++){
            s.erase({v[j].ff,v[j].ss});
            s.insert(v[i]);
            j++;
            auto [p,q] = *s.find_by_order(ind);
            cout<<p<<" ";
        }
    }
 
}
