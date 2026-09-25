#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		vector<ll>v(n);
		for(ll &y:v)cin>>y;
		vector<int>x;
		int mn=31;
		for(int i=0;i<q;i++){
			int X;
			cin>>X;
			if(mn>X){
				x.push_back(X);
				mn=X;
			}
		}
		for(int y:x){
			ll p=1LL<<y;
			ll ad=1<<(y-1);
			for(int i=0;i<n;i++){
				if(v[i]%p==0)v[i]+=ad;
			}
		}
		for(int y:v)cout<<y<<" ";
		cout<<endl;
	}
}