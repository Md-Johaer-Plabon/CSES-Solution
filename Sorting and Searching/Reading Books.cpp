#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ll n;
    cin>>n;
    ll a[n+5];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll sum = accumulate(a,a+n-1,0LL);
    if(sum<=a[n-1])cout<<2LL*a[n-1]<<endl;
    else {
        sum = accumulate(a,a+n,0LL);
        cout<<sum<<endl;
    }
 
 
return 0;
}