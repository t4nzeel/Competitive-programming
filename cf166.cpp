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
    	ll s=0;
    	for(ll &x:v){
    		cin>>x;
    		s+=x;
    	}
    	ll cur=0,ans=1;
    	for(ll i=0;i<n-1;i++){
    		cur+=v[i];
    		s-=v[i];
    		ans=max(ans,__gcd(s,cur));
    	}
    	cout<<ans<<endl;
    }
}