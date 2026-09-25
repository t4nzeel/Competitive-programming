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
    	vector<ll>v(n);
    	ll co=0,ce=0;
    	for(ll i=0;i<n;i++){
    		cin>>v[i];
    		if(v[i]%2==0)ce++;
    		else co++;
    	}
    	if(ce!=0 && co!=0){
    		cout<<2<<endl;
    	}
    	else{
    		ll p=1;
    		while(true){
    			co=ce=0;
    			for(ll i=0;i<n;i++){
    				v[i]/=2;
    				if(v[i]&1)co++;
    				else ce++;
    			}
    			p*=2;
    			if(co!=0 && ce!=0){
    				cout<<p*2<<endl;
    				break;
    			}
    		}
    	}
    }
}