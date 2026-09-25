#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n;
    	cin>>n;
    	vector<ll>pos(2*n+1,0);
    	for(ll i=1;i<=n;i++){
    		ll x;
    		cin>>x;
    		pos[x]=i;
    	}
    	ll ans=0;
    	for(ll x=1;x<=2*n;x++){
    		if(!pos[x])continue;
    		for(ll y=1;x*y<=2*n;y++){
    			if(!pos[y])continue;
    			ll i=pos[x];
    			ll j=pos[y];
    			if(i<j && i+j==x*y)ans++;
    		}
    	}
    	cout<<ans<<endl;
    }
}