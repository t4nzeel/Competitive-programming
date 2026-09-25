#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,m;
    	cin>>n>>m;
    	vector<ll>k(n),c(m);
    	for(ll &x:k)cin>>x;
    	for(ll &x:c)cin>>x;
    	sort(k.begin(),k.end(),greater<ll>());
    	ll ans=0,j=0;
    	for(ll x:k){
    		if(j<x){
    			ans+=c[j];
    			j++;
    		}
    		else ans+=c[x-1];
    	}
    	cout<<ans<<endl;
    }
}