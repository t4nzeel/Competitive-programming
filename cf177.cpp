#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,q;
    cin>>n>>q;
    vector<ll>v(51,0);
    for(ll i=1;i<=n;i++){
    	ll x;
    	cin>>x;
    	if(v[x]==0)v[x]=i;
    }
    while(q--){
    	ll x;
    	cin>>x;
    	cout<<v[x]<<" ";
    	ll c=v[x];
    	for(ll i=1;i<=50;i++){
    		if(v[i]<c)v[i]++;
    	}
    	v[x]=1;
    }
}