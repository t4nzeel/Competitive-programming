#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<ll>>adj;
vector<ll>color;
void dfs(ll node,ll c){
	color[node]=c;
	for(ll child:adj[node]){
		if(color[child]==0)dfs(child,3-c);
	}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	ll n;
	cin>>n;
	adj.resize(n+1);
	color.resize(n+1,0);
	for(ll i=0;i<n-1;i++){
		ll u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,1);
	ll cnt1=0,cnt2=0;
	for(ll i=1;i<=n;i++){
		if(color[i]==1)cnt1++;
		else cnt2++;
	}
	cout<<(1LL*cnt2*cnt1)-(n-1)<<endl;
}