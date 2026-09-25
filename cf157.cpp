#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll>v(n),ps(n+1,0);
		for(ll &x:v)cin>>x;
		sort(v.begin(),v.end());
		for(ll i=0;i<n;i++)ps[i+1]=ps[i]+v[i];
		ll ans=0;
		for(ll j=0;j<=k;j++){
			ll l=2LL*j;
			ll r=k-j;
			ll s=ps[n-r]-ps[l];
			ans=max(ans,s);
		}
		cout<<ans<<endl;
	}
}