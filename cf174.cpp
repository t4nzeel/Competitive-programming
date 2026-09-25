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
    	reverse(v.begin()+1,v.end());
    	ll ans=0,x=1;
    	while(x<n){
    		if(v[x+1]==v[1]){
    			x++;
    			continue;
    		}
    		ans++;
    		x*=2;
    	}
    	cout<<ans<<endl;
    }
}