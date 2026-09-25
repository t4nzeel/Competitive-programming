#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll s=0;
		ll gM=LLONG_MAX;
		ll sM=LLONG_MAX;
		for(int i=0;i<n;i++){
			int m;
			cin>>m;
			vector<ll>v(m);
			for(auto &x:v)cin>>x;
			sort(v.begin(),v.end());
			ll GM=v[0];
			ll SM=v[1];
			gM=min(gM,GM);
			sM=min(sM,SM);
			s+=SM;
		}
		cout<<s-sM+gM<<endl;
	}
}