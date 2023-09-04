#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
ll bigmod(ll n,ll x){
 if(x==0)return 1;
 if(x==1)return n;
 if(x%2==0){
        ll res = bigmod(n,x/2);
        res%=mod;
       return (res*res)%mod;
 }
 else return (bigmod(n,x-1)%mod*n%mod)%mod;
 
}
int main(){
    ll n;
    cin>>n;
    ll sum = (n*(n+1))/2;
    if(sum%2){cout<<0<<endl;return 0;}
    sum/=2;
    ll dp[sum+5]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=sum;j>=1;j--)
            if(j>=i&&dp[j-i])dp[j] = ((dp[j-i]%mod)+(dp[j]%mod))%mod;
    }
    cout<<(dp[sum]*bigmod(2,mod-2))%mod<<endl;
 
return 0;
}