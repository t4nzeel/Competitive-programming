#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n;
    	cin>>n;
    	vector<ll>v(1001,-1);
    	for(ll i=1;i<=n;i++){
    		ll x;
    		cin>>x;
    		v[x]=i;
    	}
    	ll mx=-1;
    	for(ll i=1;i<=1000;i++){
    		if(v[i]==-1)continue;
    		for(ll j=1;j<=1000;j++){
    			if(v[j]==-1)continue;
    			if(__gcd(i,j)==1)mx=max(mx,v[i]+v[j]);
    		}
    	}
    	cout<<mx<<endl;
    }
}