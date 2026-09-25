#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		unordered_set<ll>st;
		bool ok=false;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			if(st.count(x))ok=true;
			st.insert(x);
		}
		if(ok)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}