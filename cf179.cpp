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
    	vector<pair<ll,ll>>a,b,c;
    	for(ll i=1;i<=n;i++){
    		ll x;
    		cin>>x;
    		a.push_back({x,i});
    	}
    	for(ll i=1;i<=n;i++){
    		ll x;
    		cin>>x;
    		b.push_back({x,i});
    	}
    	for(ll i=1;i<=n;i++){
    		ll x;
    		cin>>x;
    		c.push_back({x,i});
    	}
    	sort(a.begin(),a.end(),greater<pair<ll,ll>>());
    	sort(b.begin(),b.end(),greater<pair<ll,ll>>());
    	sort(c.begin(),c.end(),greater<pair<ll,ll>>());
    	ll ans=0;
    	for(ll i=0;i<min(3LL,n);i++){
    		for(ll j=0;j<min(3LL,n);j++){
    			for(ll k=0;k<min(3LL,n);k++){
    				if(a[i].second!=b[j].second &&
    					a[i].second!=c[k].second &&
    					b[j].second!=c[k].second)
    					ans=max(ans,a[i].first+b[j].first+c[k].first);
    			}
    		}
    	}
    	cout<<ans<<endl;
    }
}