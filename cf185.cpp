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
    	vector<vector<ll>>v(n,vector<ll>(m));
    	for(ll i=0;i<n;i++){
    		for(ll j=0;j<m;j++){
    			cin>>v[i][j];
    		}
    	}
    	ll ans=0;
    	for(ll j=0;j<m;j++){
    		vector<ll>c(n);
    		for(ll i=0;i<n;i++)c[i]=v[i][j];
    		sort(c.begin(),c.end());
    		ll p=0;
    		for(ll i=0;i<n;i++){
    			ans+=c[i]*1LL*i-p;
    			p+=c[i];
    		}
    	}
    	cout<<ans<<endl;
    }
}