#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll &x:v)cin>>x;
    ll s=0;
	for(ll i=0;i<k;i++)s+=v[i];
	ll t=s;
	for(ll i=k;i<n;i++){
		s+=v[i];
		s-=v[i-k];
		t+=s;
	}
	double ans=(double)t/(n-k+1);
	cout<<fixed<<setprecision(10)<<ans<<endl;
}