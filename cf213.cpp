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
    	map<ll,ll>cnt;
    	for(ll i=0;i<n;i++){
    		ll x;
    		cin>>x;
    		for(ll p=2;p*p<=x;p++){
    			while(x%p==0){
    				cnt[p]++;
    				x/=p;
    			}
    		}
    		if(x>1)cnt[x]++;
    	}
    	bool ok=true;
    	for(auto it=cnt.begin();it!=cnt.end();it++){
    		ll exponent=it->second;
    		if(exponent%n!=0){
    			ok=false;
    			break;
    		}
    	}
    	if(ok)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    }
}