#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll>v(n);
		for(ll &x:v)cin>>x;
		ll cur=v[0],ans=v[0];
		for(int i=1;i<n;i++){
			if((abs(v[i])%2)!=(abs(v[i-1])%2))cur=max(v[i],cur+v[i]);
			else cur=v[i];
			ans=max(ans,cur);
		}
		cout<<ans<<endl;
	}
}