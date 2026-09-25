#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,q;
		cin>>n>>k>>q;
		ll ans=0;
		ll cnt=0;
		vector<ll>v(n);
		for(ll &x:v)cin>>x;
		for(ll i=0;i<n;i++){
			if(v[i]<=q)cnt++;
			else{
				if(cnt>=k){
					ll x=cnt-k+1;
					ans+=x*(x+1)/2;
				}
				cnt=0;
			}
		}
		if(cnt>=k){
			ll x=cnt-k+1;
			ans+=x*(x+1)/2;
		}
		cout<<ans<<endl;
	}
}