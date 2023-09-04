#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
int main (){
    ll n,m;
    cin>>n>>m;
    ll a[n+5];
    for(int i=0;i<n;i++)cin>>a[i];
    pair<ll,ll>dp[(1<<n)+105];
    dp[0]={1,0};
    for(ll i=1;i<(1LL<<n);i++){
        dp[i] = {n+5,0};
        for(int j=0;j<n;j++){
            if((i&(1LL<<j))){
               pair<ll,ll>temp;
               temp = dp[(i^(1LL<<j))];
 
               if(temp.ss+a[j]<=m)temp.ss+=a[j];
               else temp.ff++,temp.ss=a[j];
 
               dp[i] = min(dp[i],temp);
            }
        }
    }
    cout<<dp[(1LL<<n)-1].ff<<endl;
 
return 0;
}