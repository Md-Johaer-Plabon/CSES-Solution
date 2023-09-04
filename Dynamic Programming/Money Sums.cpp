#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main  (){
    int n;
    cin>>n;
    ll a[n+5];
    for(int i=0;i<n;i++)cin>>a[i];
    bool dp[1000005]={0};
    dp[0]=true;
 
    for(int i=0;i<n;i++){
        for(int j=1000000;j>=1;j--)
            if(dp[j-a[i]]&&j>=a[i])dp[j]=true;
    }
    int coun = 0;
    for(int i=1;i<=1000000;i++)if(dp[i])coun++;
    cout<<coun<<endl;
    for(int i=1;i<=1000000;i++)if(dp[i])cout<<i<<" ";
    cout<<endl;
return 0;
}