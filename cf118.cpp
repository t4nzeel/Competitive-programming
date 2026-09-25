#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		vector<int>a(n),b(n);
		for(int &x :a)cin>>x;
		for(int &y :b)cin>>y;
		vector<pair<int,int>>v;
		for(int i=0;i<n;i++)v.push_back({b[i],a[i]});
		sort(v.begin(),v.end());
		ll ans=p;
		int informed=1;
		for(auto &x:v){
			int cost=x.first;
			int cnt=x.second;
			if(informed==n)break;
			if(cost>=p)break;
			int take=min(cnt,n-informed);
			ans+=1LL*take*cost;
			informed+=take;
		}
		ans+=1LL*(n-informed)*p;
		cout<<ans<<endl;
	}
}