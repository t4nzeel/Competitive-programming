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
    	vector<ll>v(n+1);
    	for(ll i=1;i<=n;i++)cin>>v[i];
    	vector<ll>a;
    	ll ans=0;
    	for(ll j=1;j<=n;j++){
    		if(v[j]>=j)continue;
    		ll cnt=lower_bound(a.begin(),a.end(),v[j])-a.begin();
    		ans+=cnt;
    		a.push_back(j);
    	}
    	cout<<ans<<endl;
    }
}