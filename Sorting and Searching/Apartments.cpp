#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
        ll n,m,x,k,coun=0;
        cin>>n>>m>>k;
        map<ll,ll>mp;
        ll a[n+5],b[m+5];
        for(int i=0;i<n;i++)cin>>a[i];  
        for(int i=0;i<m;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
 
 
int i=0,j=0;
        while(i<n && j<m){ 
        if(abs(a[i]-b[j])<=k)coun++,i++,j++;    
        else if(a[i]>b[j])j++;
        else i++;
        }
        cout<<coun<<endl;
}