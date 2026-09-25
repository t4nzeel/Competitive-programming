#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k,s,t;
		cin>>n>>k>>s>>t;
		vector<ll>v(n+1),y(n+1);
		for(ll i=1;i<=n;i++)cin>>v[i]>>y[i];
		ll ans=llabs(v[s]-v[t])+llabs(y[s]-y[t]);
		if(k==0){
			cout<<ans<<endl;
			continue;
		}
		ll mns=LLONG_MAX,mnt=LLONG_MAX;
		for(int i=1;i<=k;i++){
			mns=min(mns,llabs(v[s]-v[i])+llabs(y[s]-y[i]));
			mnt=min(mnt,llabs(v[t]-v[i])+llabs(y[t]-y[i]));
		}
		ans=min(ans,mns+mnt);
		cout<<ans<<endl;
	}
}