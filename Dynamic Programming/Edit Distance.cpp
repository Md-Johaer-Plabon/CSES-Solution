#include<bits/stdc++.h>
using namespace std;
int main  (){
    string s,ss;
    cin>>s>>ss;
    int n = s.size(),m=ss.size();
    int dp[n+5][m+5];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            dp[i][j]=0;
 
    for(int i=0;i<=m;i++)dp[0][i]=i;
 
    for(int i=0;i<=n;i++)dp[i][0]=i;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) {
            if(s[i-1]==ss[j-1])dp[i][j]=dp[i-1][j-1];
            else dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
        }
    }
    cout<<dp[n][m]<<endl;
 
return 0;
}