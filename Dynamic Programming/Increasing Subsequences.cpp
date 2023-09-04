#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll a[n+5];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v;
    for(int i=0;i<n;i++){
        auto it = lower_bound(v.begin(),v.end(),a[i]);
        if(it==v.end())v.push_back(a[i]);
        else v[it-v.begin()]=a[i];
    }
    cout<<v.size()<<endl;
 
return 0;
}
 