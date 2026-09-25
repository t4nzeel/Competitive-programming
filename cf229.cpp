#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,x,m;
    	cin>>n>>x>>m;
    	ll l=x,r=x;
    	for(ll i=1;i<=m;i++){
    		ll a,b;
    		cin>>a>>b;
    		if(b>=l &&a<=r){
    			l=min(l,a);
    			r=max(r,b);
    		}
    	}
    	cout<<r-l+1<<endl;
    }
}