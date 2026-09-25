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
			cin>>v[i].first;
			v[i].second=i;
		}
		sort(v.begin(),v.end());
		vector<ll>prefSum(n);
		prefSum[0]=v[0].first;
		for(int i=1;i<n;i++)prefSum[i]=prefSum[i-1]+v[i].first;
		vector<int>r(n);
		r[n-1]=n-1;
		for(int i=n-2;i>=0;i--){
			if(prefSum[i]>=v[i+1].first)r[i]=r[i+1];
			else r[i]=i;
		}
		vector<int>ans(n);
		for(int i=0;i<n;i++){
			ans[v[i].second]=r[i];
		}
		for(int x:ans)cout<<x<<" ";
		cout<<endl;
	}
}