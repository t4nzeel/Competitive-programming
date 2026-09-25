#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k,b,s;
		cin>>n>>k>>b>>s;
		if(s<k*b || s>k*b+n*(k-1)){
			cout<<-1<<endl;
			continue;
		}
		vector<ll>v(n,0);
		v[0]=k*b;
		ll ex=s-k*b;
		for(ll i=0;i<n && ex>0;i++){
			ll add=min(k-1,ex);
			v[i]+=add;
			ex-=add;
		}
		for(ll &x:v)cout<<x<<" ";
		cout<<endl;
	}
}