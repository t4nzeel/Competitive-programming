#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int MOD=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>a(n),b(n);
		for(ll &x:a)cin>>x;
		for(ll &x:b)cin>>x;
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		ll ans=1;
		for(int i=n-1;i>=0;i--){
			int p=upper_bound(a.begin(),a.end(),b[i])-a.begin();
			int c=n-p;
			int u=c-(n-1-i);
			if(u<=0){
				ans=0;
				break;
			}
			ans=(ans*u)%MOD;
		}
		cout<<ans<<endl;
	}
}