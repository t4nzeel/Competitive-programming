#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,h;
    cin>>n>>h;
    vector<ll>v(n);
    for(ll &x:v)cin>>x;
    ll  ans=0;
	for(ll k=1;k<=n;k++){
		vector<ll>a;
		for(ll i=0;i<k;i++)a.push_back(v[i]);
		sort(a.begin(),a.end(),greater<ll>());
		ll r=0;
		for(ll i=0;i<k;i+=2)r+=a[i];
		if(r<=h)ans=k;
	}
	cout<<ans<<endl;
}