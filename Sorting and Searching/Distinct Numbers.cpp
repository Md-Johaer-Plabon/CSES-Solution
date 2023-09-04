#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
        ll n,x;
        cin>>n;
        map<ll,ll>mp;
        while(n--)
        cin>>x,mp[x]++;
        cout<<mp.size()<<endl;
}