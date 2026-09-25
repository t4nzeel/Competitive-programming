#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<ll>cnt(200001,0);
    while (t--){
    	ll n;
    	cin>>n;
    	vector<vector<ll>>v(n);
    	for(ll i=0;i<n;i++){
    		ll k;
    		cin>>k;
    		v[i].resize(k);
    		for(ll j=0;j<k;j++){
    			cin>>v[i][j];
    			cnt[v[i][j]]++;
    		}
    	}
    	bool ok=false;
    	for(ll i=0;i<n;i++){
    		bool redundant=true;
    		for(ll bit:v[i]){
    			if(cnt[bit]==1){
    				redundant=false;
    				break;
    			}
    		}
    		if(redundant){
    			ok=true;
    			break;
    		}
    	}
    	if(ok)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    	for(ll i=0;i<n;i++){
    		for(ll bit:v[i])cnt[bit]=0;
    	}
    }
}