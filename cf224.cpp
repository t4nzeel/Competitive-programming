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
    	vector<pair<ll,ll>>v;
    	for(ll i=0;i<n;i++){
    		ll k;
    		cin>>k;
    		ll need=0;
    		for(ll j=0;j<k;j++){
    			ll x;
    			cin>>x;
    			need=max(need,x-j+1);
    		}
    		v.push_back({need,k});
    	}
    	sort(v.begin(),v.end());
    	ll killed=0,ans=0;
    	for(auto [need,k]:v){
    		ans=max(ans,need-killed);
    		killed+=k;
    	}
    	cout<<ans<<endl;
    }
}