#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,k;
    	cin>>n>>k;
    	vector<vector<ll>>pos(k+1);
    	for(ll i=1;i<=n;i++){
    		ll x;
    		cin>>x;
    		pos[x].push_back(i);
    	}
    	ll ans=LLONG_MAX;
    	for(ll c=1;c<=k;c++){
    		ll mx1=0,mx2=0,prv=0;
    		for(ll p:pos[c]){
    			ll gap=p-prv-1;
    			if(gap>=mx1){
    				mx2=mx1;
    				mx1=gap;
    			}
    			else if(gap>mx2)mx2=gap;
    			prv=p;
    		}
    		int gap=n-prv;
    		if(gap>=mx1){
    				mx2=mx1;
    				mx1=gap;
    			}
    		else if(gap>mx2)mx2=gap;
    		ans=min(ans,max(mx2,mx1/2));
    	}
    	cout<<ans<<endl;
    }
}