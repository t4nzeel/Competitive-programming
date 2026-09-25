#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		vector<ll>a(n),b(n),c(n);
		for(ll &i:a)cin>>i;
		for(ll &i:b)cin>>i;
		for(ll &i:c)cin>>i;
		ll ans=0;
		for(ll i=0;i<n;i++){
			if((a[i] | x)!=x)break;
			ans|=a[i];
		}
		for(ll i=0;i<n;i++){
			if((b[i] | x)!=x)break;
			ans|=b[i];
		}
		for(ll i=0;i<n;i++){
			if((c[i] | x)!=x)break;
			ans|=c[i];
		}
		if(ans==x)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}