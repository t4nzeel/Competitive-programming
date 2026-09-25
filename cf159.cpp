#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>v(n);
		for(ll &x:v)cin>>x;
		ll ans=0;
		for(int i=0;i<n/2;i++){
			ans=__gcd(ans,abs(v[i]-v[n-i-1]));
		}
		cout<<ans<<endl;
	}
}