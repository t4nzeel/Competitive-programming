#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll>v(n+1),pS(n+1,0);
		for(int i=1;i<=n;i++){
			cin>>v[i];
			pS[i]=pS[i-1]+v[i];
		}
		ll ans=0;
		for(int k=1;k<=n;k++){
			if(n%k!=0)continue;
			ll mn=LLONG_MAX;
			ll mx=LLONG_MIN;
			for(int i=k;i<=n;i+=k){
				ll s=pS[i]-pS[i-k];
				mn=min(mn,s);
				mx=max(mx,s);
			}
			ans=max(ans,mx-mn);
		}
		cout<<ans<<endl;
	}
}