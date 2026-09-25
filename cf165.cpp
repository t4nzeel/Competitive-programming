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
    	ll mn=LLONG_MAX;
    	ll cntn=0;
    	for(ll &x:v){
    		cin>>x;
    		mn=min(mn,abs(x));
    		if(x<0)cntn++;
    	}
    	ll s=0;
    	for(ll i=0;i<n;i++)s+=abs(v[i]);
    	if(cntn%2==0)cout<<s<<endl;
    	else cout<<s-2*mn<<endl;
    }
}