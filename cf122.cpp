#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>a(n),b(n),f1(2*n+1),f2(2*n+1);
		for(ll &x:a)cin>>x;
		for(ll &x:b)cin>>x;
		for(ll i=0;i<n;){
			ll j=i;
			while(j<n && a[j]==a[i])j++;
			f1[a[i]]=max(f1[a[i]],j-i);
			i=j;
		}
		for(ll i=0;i<n;){
			ll j=i;
			while(j<n && b[j]==b[i])j++;
			f2[b[i]]=max(f2[b[i]],j-i);
			i=j;
		}
		ll ans=0;
		for(ll i=1;i<=2*n;i++){
			ans=max(ans,f1[i]+f2[i]);
		}
		cout<<ans<<endl;
	}
}