#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
        ll n,m,x,k,coun=0;
        cin>>n>>x;
        
        list<ll>v;
        
        for(int i=0;i<n;i++)
        cin>>k,v.push_back(k);
        
        v.sort();
        while(!v.empty()){
        auto it = v.end();        it--;
        ll temp=*it ,temp2= 100000000000000;
        if(v.size()>1){
        temp2 = *v.begin();
       }
        if(temp+temp2<=x){coun++,v.pop_back();v.pop_front();}  
        else coun++,v.pop_back();
    } 
        cout<<coun<<endl;
}