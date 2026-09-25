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
    	vector<ll>a(n),b(n),diff(n);
    	ll mx=LLONG_MIN;
    	for(ll &x:a)cin>>x;
    	for(ll i=0;i<n;i++){
    		cin>>b[i];
    		diff[i]=a[i]-b[i];
    		mx=max(mx,diff[i]);
    	}
    	vector<ll>ans;
    	for(ll i=0;i<n;i++){
    		if(diff[i]==mx)ans.push_back(i+1);
    	}
    	cout<<ans.size()<<endl;
    	for(ll x:ans)cout<<x<<" ";
    	cout<<endl;
    }
}