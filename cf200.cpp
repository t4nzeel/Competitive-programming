#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>v(n);
    for(ll&x:v)cin>>x;
    sort(v.begin(),v.end());
	ll grp=1;
	vector<ll>need;
	for(ll i=1;i<n;i++){
		ll gap=(v[i]-v[i-1]);
		if(gap>x){
			grp++;
			need.push_back((gap-1)/x);
		}
	}
	sort(need.begin(),need.end());
	for(ll r:need){
		if(r<=k){
			k-=r;
			grp--;
		}
		else break;
	}
	cout<<grp<<endl;
}