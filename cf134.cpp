#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<ll,int>>v(n);
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			v[i]={x,i+1};
		}
		sort(v.begin(),v.end(),greater<>());
		vector<ll>p(n+1);
		p[0]=0;
		ll ans=0;
		ll d=1;
		for(ll i=0;i<n;i++){
			ll P;
			if(i%2==0)P=d;
			else{
				P=-d;
				d++;
			}
			int in=v[i].second;
			p[in]=P;
			ans+=2LL*v[i].first*abs(P);
		}
		cout<<ans<<endl;
		for(int i=0;i<=n;i++)cout<<p[i]<<" ";
		cout<<endl;
	}
}