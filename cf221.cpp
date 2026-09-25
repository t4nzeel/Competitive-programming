#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,k;
    	cin>>n>>k;
    	vector<ll>v(n);
    	for(ll &x:v)cin>>x;
    	ll ans=0;
    	for(ll b=30;b>=0;b--){
    		ll c=0;
    		for(ll i=0;i<n;i++){
    			if((v[i]&(1<<b))==0)c++;
    		}
    		if(c<=k){
    			k-=c;
    			ans|=(1<<b);
    			for(ll i=0;i<n;i++)v[i]|=(1<<b);
    		}
    	}
    	cout<<ans<<endl;
    }
}