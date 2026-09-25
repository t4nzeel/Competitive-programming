#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,q;
    	cin>>n>>q;
    	vector<ll>v(n+1),prefSum(n+1,0),mx(n+1,0);
    	for(ll i=1;i<=n;i++){
    		cin>>v[i];
    		prefSum[i]=prefSum[i-1]+v[i];
    		mx[i]=max(mx[i-1],v[i]);
    	}
    	while(q--){
    		ll k;
    		cin>>k;
    		ll pos=upper_bound(mx.begin()+1,mx.end(),k)-mx.begin()-1;
    		cout<<prefSum[pos]<<" ";
    	}
    	cout<<endl;
    }
}