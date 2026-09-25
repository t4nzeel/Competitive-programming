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
    	bool ok=false;
    	for(ll k=2;1+k+k*k<=n;k++){
    		ll sum=1+k+k*k;
    		ll p=k*k;
    		while(sum<n){
    			p*=k;
    			sum+=p;
    		}
    		if(sum==n)ok=true;
    	}
    	if(!ok)cout<<"No"<<endl;
    	else cout<<"Yes"<<endl;
    }
}