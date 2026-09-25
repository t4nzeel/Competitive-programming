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
    	for(ll i=1;i<=n;i++)cin>>v[i];
    	for(ll k=1;k<=n;k++){
    		ll l=1,r=k;
    		ll p=k;
    		while(l<=r){
    			ll m=l+(r-l)/2;
    			if(m+v[m]>=k+1){
    				p=m;
    				r=m-1;
    			}
    			else l=m+1;
    		}
    		ll cost=k-p+1;
    		cout<<cost<<" ";
    	}
    	cout<<endl;
    }
}