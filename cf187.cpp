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
    	vector<ll>v(n+1);
    	map<ll,ll>freq;
    	for(ll i=1;i<=n;i++){
    		cin>>v[i];
    		freq[v[i]]++;
    	}
    	ll ans=0;
    	while(!freq.empty()){
    		ans++;
    		auto it=freq.begin();
    		ll x=it->first;
    		while(true){
    			freq[x]--;
    			if(freq[x]==0)freq.erase(x);
    			if(freq.find(x+1)==freq.end())break;
    			x++;
    		}
    	}
    	cout<<ans<<endl;
    }
}