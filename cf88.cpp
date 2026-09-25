#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		ll mx=LLONG_MIN;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			mx=max(mx,x);
		}
		while(m--){
			char c;
			int l,r;
			cin>>c>>l>>r;
			if(l<=mx && mx<=r){
				if(c=='+') mx++;
				else mx--;
			}
			cout<<mx<<" ";
		}
		cout<<endl;
	}
}