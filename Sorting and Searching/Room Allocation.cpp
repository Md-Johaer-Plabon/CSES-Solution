#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
struct node{
  int a,b,c,d;  
};
bool cmp(node x, node y){
    if(x.a == y.a)return x.d<y.d; 
    else return x.a<y.a;
}
int main() {
    // ios::sync_with_stdio(0); 
    // cin.tie(0),cout.tie(0);
    int n;
    ll x,y;
    cin>>n; 
    ll res[n+5];
    vector<node>v; 
    for(int i=0;i<n;i++){
        scanf("%lld%lld",&x,&y);
        node n1,n2; 
        n1.a = x, n2.a =y+1;
        n1.b = i+1, n2.b = i+1;
        n1.c = y+1, n2.c = -1;
        n1.d = 1, n2.d = -1;
        
        v.push_back(n1); 
        v.push_back(n2); 
    }
    sort(v.begin(),v.end(),cmp);
    ll maxx = 0,coun = 0;
    for(int i=0;i<v.size();i++){
        coun+=v[i].d; 
        maxx = max(maxx, coun);
    }
    cout<<maxx<<endl;
    coun = 0;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q;
 
    stack<int>rooms;
    for(int i=maxx;i>=1;i--)rooms.push(i); 
    
    for(int i=0;i<v.size();i++){
        if(v[i].d == -1){ 
            int xx = q.top().ss; 
            q.pop();
            rooms.push(xx);
            }
        else { 
           // cout<<v[i].ff<<" "<<v[i].ss.ff<<" "<<rooms[0]<<endl;
            int xx = rooms.top(); 
            rooms.pop();
            res[v[i].b] = xx; 
            q.push({v[i].c,xx});   
        }
    }
    for(int i=1;i<=n;i++)printf("%lld ",res[i]);
}