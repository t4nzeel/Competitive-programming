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
    	vector<ll>v(n),cnt(30,0);
    	for(ll i=0;i<n;i++){
    		cin>>v[i];
    		for(ll j=0;j<30;j++){
    			if(v[i] & (1LL<<j))cnt[j]++;
    		}
    	}
    	for(ll k=1;k<=n;k++){
    		bool ok=true;
    		for(ll i=0;i<30;i++){
    			if(cnt[i]%k!=0){
    				ok=false;
    				break;
    			}
    		}
    		if(ok)cout<<k<<" ";
    	}
    	cout<<endl;
    }
}