#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
    ll n,m,res=1,mod=1000000007;
    cin>>n>>m;
    ll dp[n+5][m+5],a[n+5],dp1[n+5]={0};
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m+3;j++)
            dp[i][j]=0;
 
    for(int i=0;i<=m;i++)dp[0][i]=1;
 
    for(int i=1;i<=n;i++){cin>>a[i];if(a[i])dp[i][a[i]]=1;}
    if(a[1]==0)for(int i=1;i<=m;i++)dp[1][i]=1;
    a[0]=0;

    for(ll i=2;i<=n;i++){
        if(a[i]==0){
            for(ll j=1;j<=m;j++){
                for(ll k=max(j-1,0LL);k<=min(j+1,m);k++)
                if(dp[i-1][k])dp[i][j]+=dp[i-1][k],dp[i][j]%=mod;
            }
        }
        ll temp=0;
        if(a[i]){
                for(ll k=max(a[i]-1,0LL);k<=min(a[i]+1,m);k++){
                if(dp[i-1][k])dp[i][a[i]]+=dp[i-1][k],dp[i][a[i]]%=mod;
                }
                dp[i][a[i]]--;
        }
        for(ll j=1;j<=m;j++)temp+=dp[i][j],temp%=mod;
        if(a[i])
        res = ((temp%mod)*(res%mod))%mod,dp[i][a[i]]=1;//,cout<<temp<<" <-->"<<endl;
    }
    ll temp = 0;

    if(a[n]==0){for(int i=1;i<=m;i++)temp+=dp[n][i];
    res*=temp;
    res%=mod;
    }
    cout<<res<<endl;
 
 
return 0;
}