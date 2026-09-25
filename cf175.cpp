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
    	for(ll &x:v)cin>>x;
    	ll ge=0;
    	for(ll i=0;i<n;i+=2)ge=__gcd(ge,v[i]);
    	bool ok=true;
    	for(ll i=1;i<n;i+=2){
    		if(v[i]%ge==0){
    			ok=false;
    			break;
    		}
    	}
    	if(ok){
    		cout<<ge<<endl;
    		continue;
    	}
    	ll go=0;
    	for(ll i=1;i<n;i+=2)go=__gcd(go,v[i]);
    	ok=true;
    	for(ll i=0;i<n;i+=2){
    		if(v[i]%go==0){
    			ok=false;
    			break;
    		}
    	}
    	if(ok)cout<<go<<endl;
    	else cout<<0<<endl;
    }
}