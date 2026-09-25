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
    	vector<vector<ll>>v(n+1);
    	for(ll i=0;i<n;i++){
    		ll x;
    		cin>>x;
    		v[x].push_back(i);
    	}
    	bool ok =true;
    	for(ll i=1;i<=n;i++){
    		if(v[i].size()%i!=0){
    			ok=false;
    			break;
    		}
    	}
    	if(!ok){
    		cout<<-1<<endl;
    		continue;
    	}
    	ll z=1;
    	vector<ll>ans(n);
    	for(ll x=1;x<=n;x++){
    		ll m=v[x].size();
    		for(ll i=0;i<m;i+=x){
    			for(ll j=0;j<x;j++)ans[v[x][i+j]]=z;
    			z++;
    		}
    	}
    	for(ll x:ans)cout<<x<<" ";
    	cout<<endl;
    }
}