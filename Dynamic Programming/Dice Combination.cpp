#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
 
int main() {
		ll n; 
		cin>>n; 
		ll dp[n+5]={0}; 
		dp[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=6;j++){
			if(i>=j){
				dp[i] += dp[i-j]; 
				dp[i]%=mod;
			}
			}
		} 
		
		cout<<dp[n]<<endl;
	return 0;
}
