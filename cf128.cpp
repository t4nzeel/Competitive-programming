#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		vector<ll>v(n);
		ll ans=0;
		for(ll &y:v)cin>>y;
		ll L=v[0]-x;
		ll R=v[0]+x;
		for(int i=1;i<n;i++){
			ll l=v[i]-x;
			ll r=v[i]+x;
			if(max(L,l)<=min(R,r)){
				L=max(L,l);
				R=min(r,R);
			}
			else{
				ans++;
				L=l;
				R=r;
			}
		}
		cout<<ans<<endl;
	}
}