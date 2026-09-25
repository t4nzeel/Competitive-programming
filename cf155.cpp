#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,c;
		cin>>n>>c;
		vector<ll>v(n);
		for(ll &x:v)cin>>x;
		ll l=0,r=1e9;
		while(l<=r){
			ll m=l+(r-l)/2;
			ll s=0;
			for(int i=0;i<n;i++){
				s+=(2LL*m+v[i])*(2LL*m+v[i]);
				if(s>c)break;
			}
			if(s==c){
				cout<<m<<endl;
				break;
			}
			else if(s>c)r=m-1;
			else l=m+1;
		}
	}
}