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
    	vector<ll>a;
   		for(ll i=0;i<n;i++){
   			if(a.empty() || a.back()!=v[i])a.push_back(v[i]);
   		}
   		ll sz=a.size();
   		if(sz==1){
   			cout<<1<<endl;
   			continue;
   		}
   		ll ans=2;
   		for(ll i=1;i<sz-1;i++){
   			if((a[i]>a[i+1] && a[i]>a[i-1]) ||
   				(a[i]<a[i+1] && a[i]<a[i-1]))ans++;
   		}
   		cout<<ans<<endl;
    }
}