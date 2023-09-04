#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ll n,x;
    cin>>n>>x;
    ll a[n+5],b[n+5];
    for(int i=0;i<n;i++)cin>>a[i];
 
    for(int i=0;i<n;i++)cin>>b[i];
    ll dp[x+5]={0};
    dp[0]=0;
    for(int i=1;i<=x;i++)dp[i]=-1;
    for(int i=0;i<n;i++){
        for(int j=x;j>=1;j--)
            if(j>=a[i])dp[j] = max(dp[j],dp[j-a[i]]+b[i]);
    }
    ll res = 0;
    for(int i=0;i<=x;i++)res=max(res,dp[i]);
    cout<<res<<endl;
 
 
return 0;
}