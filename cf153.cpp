#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		ll x;
		cin>>n>>x;
		vector<ll>v(n);
		ll mx=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			mx=max(mx,v[i]);
		}
		ll l=1,r=mx+x,ans=1;
		while(l<=r){
			bool ok =true;
			ll mid=l+(r-l)/2;
			ll w=0;
			for(ll y:v){
				w+=max(0LL,mid-y);
				if(w>x){
					ok=false;
					break;
				}
			}
			if(ok){
				ans=mid;
				l=mid+1;
			}
			else r=mid-1;
		}
		cout<<ans<<endl;
	}
}